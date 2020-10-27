# Лабораторная работа 2
# Исследование алгоритма имитации отжига

## Цель
Изучение метода имитации отжига для поиска экстремума на примере унимодальной и мультимодальной функций одного переменного.

## Задача
1.На интервале [1.5;4] задана унимодальная функция одного переменного f(x)=cos(x)*th(x). Используя метод имитации отжига осуществить поиск минимума f(x).
2. При аналогичных исходных условиях осуществить поиск минимума f(x), модулированной сигналом sin5x, т.е. мультимодальной функции f(x)*sin5x.


## Работа программы
Таблица 1. Результаты поиска экстремума f(x).
+-------+-----------+---------+------------+

|   N   |    T      |    x    |    f(x)    |

+-------+-----------+---------+------------+
|      1|  10000.000|    1.754|      -0.172|
|      2|   9500.000|    2.725|      -0.907|
|      3|   9025.000|    1.886|      -0.296|
|      4|   8573.750|    1.559|       0.011|
|      5|   8145.062|    3.556|      -0.914|
|      6|   7737.809|    3.425|      -0.958|
|      7|   7350.919|    3.865|      -0.749|
|      8|   6983.373|    2.265|      -0.626|
|      9|   6634.204|    3.962|      -0.682|
|     10|   6302.494|    2.408|      -0.731|
|     11|   5987.369|    2.702|      -0.897|
|     12|   5688.001|    3.717|      -0.838|
|     13|   5403.601|    3.569|      -0.909|
|     14|   5133.421|    2.062|      -0.457|
|     15|   4876.750|    3.856|      -0.755|
|     16|   4632.912|    2.238|      -0.605|
|     17|   4401.267|    1.770|      -0.186|
|     18|   4181.203|    3.764|      -0.812|
|     19|   3972.143|    1.929|      -0.336|
|     20|   3773.536|    2.059|      -0.454|
|     21|   3584.859|    3.548|      -0.917|
|     22|   3405.616|    2.455|      -0.762|
|     23|   3235.335|    2.504|      -0.793|
|     24|   3073.569|    2.934|      -0.973|
|     25|   2919.890|    2.507|      -0.794|
|     26|   2773.896|    2.839|      -0.948|
|     27|   2635.201|    2.339|      -0.682|
|     28|   2503.441|    3.165|      -0.996|
|     29|   2378.269|    3.846|      -0.761|
|     30|   2259.355|    1.868|      -0.279|
|     31|   2146.388|    1.593|      -0.020|
|     32|   2039.068|    2.424|      -0.742|
|     33|   1937.115|    1.503|       0.062|
|     34|   1840.259|    3.925|      -0.708|
|     35|   1748.246|    2.779|      -0.928|
|     36|   1660.834|    3.696|      -0.849|
|     37|   1577.792|    1.683|      -0.104|
|     38|   1498.903|    1.627|      -0.052|
|     39|   1423.957|    3.482|      -0.941|
|     40|   1352.760|    3.017|      -0.988|
|     41|   1285.122|    2.801|      -0.936|
|     42|   1220.865|    3.168|      -0.996|
|     43|   1159.822|    3.683|      -0.856|
|     44|   1101.831|    1.798|      -0.213|
|     45|   1046.740|    2.259|      -0.621|
|     46|    994.403|    2.330|      -0.676|
|     47|    944.682|    3.019|      -0.988|
|     48|    897.448|    1.967|      -0.371|
|     49|    852.576|    2.438|      -0.751|
|     50|    809.947|    2.250|      -0.614|
|     51|    769.450|    3.630|      -0.882|
|     52|    730.977|    3.133|      -0.996|
|     53|    694.428|    3.018|      -0.988|
|     54|    659.707|    3.740|      -0.825|
|     55|    626.722|    2.565|      -0.829|
|     56|    595.386|    3.312|      -0.983|
|     57|    565.616|    1.847|      -0.259|
|     58|    537.335|    2.390|      -0.718|
|     59|    510.469|    2.786|      -0.930|
|     60|    484.945|    1.657|      -0.080|
|     61|    460.698|    2.778|      -0.928|
|     62|    437.663|    3.223|      -0.994|
|     63|    415.780|    2.785|      -0.930|
|     64|    394.991|    1.934|      -0.341|
|     65|    375.241|    3.950|      -0.690|
|     66|    356.479|    2.182|      -0.559|
|     67|    338.655|    2.194|      -0.570|
|     68|    321.723|    3.990|      -0.661|
|     69|    305.636|    3.964|      -0.680|
|     70|    290.355|    2.890|      -0.962|
|     71|    275.837|    3.646|      -0.874|
|     72|    262.045|    2.044|      -0.441|
|     73|    248.943|    3.590|      -0.900|
|     74|    236.496|    2.504|      -0.793|
|     75|    224.671|    2.905|      -0.966|
|     76|    213.437|    2.239|      -0.606|
|     77|    202.765|    2.920|      -0.970|
|     78|    192.627|    3.932|      -0.703|
|     79|    182.996|    1.618|      -0.044|
|     80|    173.846|    3.501|      -0.934|
|     81|    165.154|    2.562|      -0.827|
|     82|    156.896|    2.144|      -0.528|
|     83|    149.051|    1.613|      -0.039|
|     84|    141.599|    2.007|      -0.408|
|     85|    134.519|    3.912|      -0.717|
|     86|    127.793|    2.891|      -0.963|
|     87|    121.403|    2.073|      -0.466|
|     88|    115.333|    1.979|      -0.382|
|     89|    109.566|    3.778|      -0.804|
|     90|    104.088|    1.935|      -0.342|
|     91|     98.884|    2.932|      -0.973|
|     92|     93.939|    3.124|      -0.996|
|     93|     89.242|    1.880|      -0.291|
|     94|     84.780|    1.974|      -0.378|
|     95|     80.541|    3.941|      -0.697|
|     96|     76.514|    3.924|      -0.708|
|     97|     72.689|    1.971|      -0.374|
|     98|     69.054|    2.256|      -0.619|
|     99|     65.601|    2.359|      -0.696|
|    100|     62.321|    3.595|      -0.897|
|    101|     59.205|    2.268|      -0.629|
|    102|     56.245|    1.655|      -0.078|
|    103|     53.433|    2.461|      -0.766|
|    104|     50.761|    2.514|      -0.799|
|    105|     48.223|    3.561|      -0.912|
|    106|     45.812|    2.941|      -0.975|
|    107|     43.521|    1.612|      -0.038|
|    108|     41.345|    1.519|       0.047|
|    109|     39.278|    3.384|      -0.969|
|    110|     37.314|    2.057|      -0.452|
|    111|     35.448|    3.195|      -0.995|
|    112|     33.676|    2.980|      -0.982|
|    113|     31.992|    3.053|      -0.992|
|    114|     30.393|    2.347|      -0.688|
|    115|     28.873|    2.878|      -0.959|
|    116|     27.429|    3.142|      -0.996|
|    117|     26.058|    2.472|      -0.773|
|    118|     24.755|    1.553|       0.016|
|    119|     23.517|    3.091|      -0.995|
|    120|     22.341|    3.562|      -0.912|
|    121|     21.224|    3.961|      -0.682|
|    122|     20.163|    3.006|      -0.986|
|    123|     19.155|    3.686|      -0.854|
|    124|     18.197|    1.918|      -0.326|
|    125|     17.287|    3.110|      -0.996|
|    126|     16.423|    1.663|      -0.085|
|    127|     15.602|    3.586|      -0.902|
|    128|     14.822|    3.594|      -0.898|
|    129|     14.081|    2.214|      -0.586|
|    130|     13.377|    3.212|      -0.994|
|    131|     12.708|    3.707|      -0.844|
|    132|     12.072|    1.672|      -0.094|
|    133|     11.469|    2.661|      -0.878|
|    134|     10.895|    3.972|      -0.674|
|    135|     10.351|    2.233|      -0.601|
|    136|      9.833|    3.464|      -0.947|
|    137|      9.341|    3.638|      -0.878|
|    138|      8.874|    2.555|      -0.823|
|    139|      8.431|    2.003|      -0.404|
|    140|      8.009|    3.174|      -0.996|
|    141|      7.609|    1.812|      -0.227|
|    142|      7.228|    2.769|      -0.924|
|    143|      6.867|    3.568|      -0.909|
|    144|      6.523|    3.013|      -0.987|
|    145|      6.197|    2.487|      -0.782|
|    146|      5.887|    2.487|      -0.782|
|    147|      5.593|    2.516|      -0.800|
|    148|      5.313|    2.441|      -0.753|
|    149|      5.048|    3.745|      -0.823|
|    150|      4.795|    2.114|      -0.502|
|    151|      4.556|    3.744|      -0.823|
|    152|      4.328|    2.673|      -0.884|
|    153|      4.111|    3.655|      -0.870|
|    154|      3.906|    3.090|      -0.995|
|    155|      3.711|    3.335|      -0.979|
|    156|      3.525|    2.313|      -0.663|
|    157|      3.349|    1.697|      -0.118|
|    158|      3.181|    1.823|      -0.237|
|    159|      3.022|    2.594|      -0.844|
|    160|      2.871|    3.523|      -0.926|
|    161|      2.728|    3.502|      -0.934|
|    162|      2.591|    3.502|      -0.934|
|    163|      2.462|    2.069|      -0.463|
|    164|      2.339|    1.774|      -0.191|
|    165|      2.222|    3.747|      -0.821|
|    166|      2.111|    2.749|      -0.916|
|    167|      2.005|    1.893|      -0.302|
|    168|      1.905|    3.360|      -0.974|
|    169|      1.810|    1.755|      -0.173|
|    170|      1.719|    3.166|      -0.996|
|    171|      1.633|    2.227|      -0.596|
|    172|      1.551|    3.885|      -0.736|
|    173|      1.474|    3.244|      -0.992|
|    174|      1.400|    2.704|      -0.898|
|    175|      1.330|    1.680|      -0.102|
|    176|      1.264|    1.659|      -0.082|
|    177|      1.200|    3.442|      -0.953|
|    178|      1.140|    2.599|      -0.847|
|    179|      1.083|    1.851|      -0.263|
|    180|      1.029|    3.294|      -0.986|
|    181|      0.978|    3.294|      -0.986|
|    182|      0.929|    3.628|      -0.883|
|    183|      0.882|    3.431|      -0.956|
|    184|      0.838|    3.547|      -0.918|
|    185|      0.796|    3.057|      -0.992|
|    186|      0.757|    3.057|      -0.992|
|    187|      0.719|    3.351|      -0.976|
|    188|      0.683|    3.351|      -0.976|
|    189|      0.649|    3.351|      -0.976|
|    190|      0.616|    3.568|      -0.909|
|    191|      0.585|    3.338|      -0.978|
|    192|      0.556|    3.422|      -0.959|
|    193|      0.528|    2.400|      -0.725|
|    194|      0.502|    3.021|      -0.988|
|    195|      0.477|    2.185|      -0.562|
|    196|      0.453|    3.724|      -0.834|
|    197|      0.430|    3.724|      -0.834|
|    198|      0.409|    3.326|      -0.981|
|    199|      0.388|    3.223|      -0.994|
|    200|      0.369|    2.536|      -0.812|
|    201|      0.351|    3.560|      -0.912|
|    202|      0.333|    3.629|      -0.882|
|    203|      0.316|    2.914|      -0.969|
|    204|      0.301|    3.065|      -0.993|
|    205|      0.286|    2.029|      -0.428|
|    206|      0.271|    2.224|      -0.594|
|    207|      0.258|    2.224|      -0.594|
|    208|      0.245|    3.742|      -0.824|
|    209|      0.233|    2.555|      -0.823|
|    210|      0.221|    2.519|      -0.802|
|    211|      0.210|    3.198|      -0.995|
|    212|      0.199|    3.198|      -0.995|
|    213|      0.189|    3.198|      -0.995|
|    214|      0.180|    3.198|      -0.995|
|    215|      0.171|    3.198|      -0.995|
|    216|      0.162|    3.196|      -0.995|
|    217|      0.154|    3.831|      -0.771|
|    218|      0.147|    2.467|      -0.770|
|    219|      0.139|    2.467|      -0.770|
|    220|      0.132|    2.467|      -0.770|
|    221|      0.126|    2.416|      -0.737|
|    222|      0.119|    2.416|      -0.737|
|    223|      0.113|    2.416|      -0.737|
|    224|      0.108|    3.931|      -0.703|
|    225|      0.102|    3.092|      -0.995|
+-------+-----------+---------+------------+

Result: Xmin = 3.092, Ymin = -0.995

Таблица 2. Результаты поиска экстремума f(x)*sin5x.
+-------+-----------+---------+------------+
|   N   |     T     |    x    |f(x)*sin(5x)|
+-------+-----------+---------+------------+
|      1|  10000.000|    1.754|      -0.104|
|      2|   9500.000|    2.725|      -0.791|
|      3|   9025.000|    1.886|       0.002|
|      4|   8573.750|    1.559|       0.011|
|      5|   8145.062|    3.556|       0.803|
|      6|   7737.809|    3.865|      -0.342|
|      7|   7350.919|    1.854|      -0.041|
|      8|   6983.373|    2.006|       0.231|
|      9|   6634.204|    2.408|       0.368|
|     10|   6302.494|    3.717|       0.221|
|     11|   5987.369|    3.710|       0.249|
|     12|   5688.001|    2.062|       0.354|
|     13|   5403.601|    3.856|      -0.314|
|     14|   5133.421|    2.238|       0.593|
|     15|   4876.750|    1.770|      -0.102|
|     16|   4632.912|    2.013|       0.246|
|     17|   4401.267|    1.929|       0.074|
|     18|   4181.203|    3.747|       0.095|
|     19|   3972.143|    3.548|       0.821|
|     20|   3773.536|    1.885|      -0.001|
|     21|   3584.859|    2.504|       0.037|
|     22|   3405.616|    2.507|       0.026|
|     23|   3235.335|    3.331|       0.795|
|     24|   3073.569|    2.339|       0.523|
|     25|   2919.890|    2.948|      -0.803|
|     26|   2773.896|    3.165|       0.117|
|     27|   2635.201|    3.284|       0.646|
|     28|   2503.441|    2.844|      -0.946|
|     29|   2378.269|    1.593|      -0.020|
|     30|   2259.355|    2.424|       0.321|
|     31|   2146.388|    2.525|      -0.048|
|     32|   2039.068|    3.925|      -0.495|
|     33|   1937.115|    2.779|      -0.900|
|     34|   1840.259|    3.696|       0.307|
|     35|   1748.246|    1.683|      -0.088|
|     36|   1660.834|    3.979|      -0.579|
|     37|   1577.792|    1.627|      -0.050|
|     38|   1498.903|    3.482|       0.932|
|     39|   1423.957|    2.801|      -0.927|
|     40|   1352.760|    2.507|       0.023|
|     41|   1285.122|    3.683|       0.359|
|     42|   1220.865|    1.798|      -0.090|
|     43|   1159.822|    2.993|      -0.664|
|     44|   1101.831|    2.259|       0.594|
|     45|   1046.740|    3.019|      -0.570|
|     46|    994.403|    1.967|       0.148|
|     47|    944.682|    2.438|       0.275|
|     48|    897.448|    1.755|      -0.104|
|     49|    852.576|    3.630|       0.569|
|     50|    809.947|    3.018|      -0.573|
|     51|    769.450|    3.148|       0.031|
|     52|    730.977|    3.232|       0.433|
|     53|    694.428|    3.312|       0.740|
|     54|    659.707|    3.837|      -0.253|
|     55|    626.722|    2.390|       0.415|
|     56|    595.386|    1.657|      -0.073|
|     57|    565.616|    2.655|      -0.569|
|     58|    537.335|    2.778|      -0.900|
|     59|    510.469|    3.223|       0.394|
|     60|    484.945|    3.994|      -0.592|
|     61|    460.698|    1.934|       0.083|
|     62|    437.663|    3.950|      -0.541|
|     63|    415.780|    2.182|       0.557|
|     64|    394.991|    2.194|       0.569|
|     65|    375.241|    3.964|      -0.561|
|     66|    356.479|    2.890|      -0.916|
|     67|    338.655|    3.646|       0.506|
|     68|    321.723|    2.044|       0.315|
|     69|    305.636|    2.926|      -0.856|
|     70|    290.355|    3.590|       0.705|
|     71|    275.837|    3.197|       0.274|
|     72|    262.045|    2.905|      -0.894|
|     73|    248.943|    2.239|       0.594|
|     74|    236.496|    2.920|      -0.867|
|     75|    224.671|    3.932|      -0.510|
|     76|    213.437|    1.618|      -0.042|
|     77|    202.765|    3.501|       0.910|
|     78|    192.627|    2.283|       0.585|
|     79|    182.996|    2.144|       0.508|
|     80|    173.846|    1.651|      -0.069|
|     81|    165.154|    1.613|      -0.038|
|     82|    156.896|    2.007|       0.234|
|     83|    149.051|    2.891|      -0.914|
|     84|    141.599|    2.073|       0.377|
|     85|    134.519|    1.979|       0.174|
|     86|    127.793|    2.701|      -0.723|
|     87|    121.403|    3.778|      -0.031|
|     88|    115.333|    1.732|      -0.104|
|     89|    109.566|    2.932|      -0.843|
|     90|    104.088|    3.124|      -0.089|
|     91|     98.884|    3.395|       0.921|
|     92|     93.939|    3.941|      -0.526|
|     93|     89.242|    3.924|      -0.494|
|     94|     84.780|    3.988|      -0.587|
|     95|     80.541|    2.256|       0.594|
|     96|     76.514|    3.595|       0.687|
|     97|     72.689|    2.515|      -0.005|
|     98|     69.054|    1.655|      -0.072|
|     99|     65.601|    3.720|       0.209|
|    100|     62.321|    2.514|      -0.004|
|    101|     59.205|    3.561|       0.788|
|    102|     56.245|    1.612|      -0.037|
|    103|     53.433|    1.599|      -0.026|
|    104|     50.761|    1.626|      -0.049|
|    105|     48.223|    3.384|       0.907|
|    106|     45.812|    3.421|       0.945|
|    107|     43.521|    2.980|      -0.708|
|    108|     41.345|    2.713|      -0.757|
|    109|     39.278|    3.053|      -0.424|
|    110|     37.314|    3.108|      -0.164|
|    111|     35.448|    3.142|       0.000|
|    112|     33.676|    1.979|       0.174|
|    113|     31.992|    2.323|       0.546|
|    114|     30.393|    3.562|       0.787|
|    115|     28.873|    3.961|      -0.557|
|    116|     27.429|    1.661|      -0.075|
|    117|     26.058|    3.686|       0.348|
|    118|     24.755|    1.918|       0.054|
|    119|     23.517|    2.314|       0.557|
|    120|     22.341|    1.663|      -0.076|
|    121|     21.224|    3.564|       0.781|
|    122|     20.163|    3.594|       0.693|
|    123|     19.155|    2.838|      -0.946|
|    124|     18.197|    2.214|       0.584|
|    125|     17.287|    3.212|       0.342|
|    126|     16.423|    3.707|       0.262|
|    127|     15.602|    2.115|       0.459|
|    128|     14.822|    2.712|      -0.755|
|    129|     14.081|    2.661|      -0.593|
|    130|     13.377|    2.862|      -0.941|
|    131|     12.708|    2.862|      -0.941|
|    132|     12.072|    3.464|       0.946|
|    133|     11.469|    2.482|       0.120|
|    134|     10.895|    2.555|      -0.171|
|    135|     10.351|    2.864|      -0.940|
|    136|      9.833|    2.003|       0.225|
|    137|      9.341|    3.174|       0.162|
|    138|      8.874|    1.812|      -0.081|
|    139|      8.431|    1.647|      -0.066|
|    140|      8.009|    3.568|       0.769|
|    141|      7.609|    3.013|      -0.592|
|    142|      7.228|    2.487|       0.104|
|    143|      6.867|    1.756|      -0.104|
|    144|      6.523|    2.899|      -0.903|
|    145|      6.197|    2.516|      -0.010|
|    146|      5.887|    3.683|       0.360|
|    147|      5.593|    2.114|       0.457|
|    148|      5.313|    3.744|       0.108|
|    149|      5.048|    2.673|      -0.634|
|    150|      4.795|    2.673|      -0.634|
|    151|      4.556|    3.090|      -0.253|
|    152|      4.328|    2.827|      -0.944|
|    153|      4.111|    2.313|       0.558|
|    154|      3.906|    1.697|      -0.095|
|    155|      3.711|    1.697|      -0.095|
|    156|      3.525|    2.594|      -0.330|
|    157|      3.349|    3.523|       0.874|
|    158|      3.181|    1.811|      -0.082|
|    159|      3.022|    1.997|       0.211|
|    160|      2.871|    3.644|       0.516|
|    161|      2.728|    3.202|       0.297|
|    162|      2.591|    3.747|       0.095|
|    163|      2.462|    2.749|      -0.847|
|    164|      2.339|    1.893|       0.012|
|    165|      2.222|    3.360|       0.864|
|    166|      2.111|    2.160|       0.531|
|    167|      2.005|    3.166|       0.120|
|    168|      1.905|    2.227|       0.590|
|    169|      1.810|    3.885|      -0.399|
|    170|      1.719|    3.885|      -0.399|
|    171|      1.633|    3.885|      -0.399|
|    172|      1.551|    3.348|       0.838|
|    173|      1.474|    2.690|      -0.688|
|    174|      1.400|    2.690|      -0.688|
|    175|      1.330|    2.817|      -0.940|
|    176|      1.264|    2.817|      -0.940|
|    177|      1.200|    2.817|      -0.940|
|    178|      1.140|    2.817|      -0.940|
|    179|      1.083|    2.817|      -0.940|
|    180|      1.029|    3.547|       0.824|
|    181|      0.978|    3.057|      -0.409|
|    182|      0.929|    3.057|      -0.409|
|    183|      0.882|    3.351|       0.845|
|    184|      0.838|    1.950|       0.113|
|    185|      0.796|    2.204|       0.577|
|    186|      0.757|    1.980|       0.176|
|    187|      0.719|    1.980|       0.176|
|    188|      0.683|    3.338|       0.814|
|    189|      0.649|    2.089|       0.409|
|    190|      0.616|    2.400|       0.389|
|    191|      0.585|    3.333|       0.800|
|    192|      0.556|    2.185|       0.560|
|    193|      0.528|    1.719|      -0.102|
|    194|      0.502|    3.724|       0.192|
|    195|      0.477|    3.724|       0.192|
|    196|      0.453|    3.724|       0.192|
|    197|      0.430|    3.109|      -0.159|
|    198|      0.409|    3.109|      -0.159|
|    199|      0.388|    3.109|      -0.159|
|    200|      0.369|    3.065|      -0.372|
|    201|      0.351|    2.029|       0.283|
|    202|      0.333|    2.224|       0.589|
|    203|      0.316|    1.535|       0.032|
|    204|      0.301|    3.742|       0.114|
|    205|      0.286|    3.385|       0.909|
|    206|      0.271|    3.838|      -0.255|
|    207|      0.258|    3.838|      -0.255|
|    208|      0.245|    3.838|      -0.255|
|    209|      0.233|    3.838|      -0.255|
|    210|      0.221|    3.838|      -0.255|
|    211|      0.210|    3.838|      -0.255|
|    212|      0.199|    3.831|      -0.233|
|    213|      0.189|    3.831|      -0.233|
|    214|      0.180|    3.831|      -0.233|
|    215|      0.171|    3.831|      -0.233|
|    216|      0.162|    3.831|      -0.233|
|    217|      0.154|    3.831|      -0.233|
|    218|      0.147|    3.831|      -0.233|
|    219|      0.139|    3.931|      -0.508|
|    220|      0.132|    3.931|      -0.508|
|    221|      0.126|    3.931|      -0.508|
|    222|      0.119|    3.931|      -0.508|
|    223|      0.113|    3.931|      -0.508|
|    224|      0.108|    3.931|      -0.508|
|    225|      0.102|    2.749|      -0.846|
+------+---------+---------+-----------+

Result: Xmin = 2.749, Ymin = -0.846
