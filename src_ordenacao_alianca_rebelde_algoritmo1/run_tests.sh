EXEC=$1
TMP_OUT=$2

echo "ordenacao alianca rebelde algoritmo1 (merge)"

for i in {0..9..1}; do
  start=`date +%s`
  testname=$(printf "%01d" $i)
  $EXEC < ../tests/$testname.in > $TMP_OUT
  end=`date +%s`
  runtime=$((end-start))
  if ! diff -qwB ../tests/$testname.out $TMP_OUT &>/dev/null; then

    echo "Teste: $testname falhou (duração: $runtime segundos)"
  else

    echo "Teste: $testname passou (duração: $runtime segundos)"
  fi
done