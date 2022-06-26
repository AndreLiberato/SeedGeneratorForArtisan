# Seed Generator for Artisan
Gerador de seed para o Artisan do Laravel

# Como compilar
```
cmake -B build
```
```
cmake --build build
```

# Como executar
```
./build/sga example.txt example_table column_name
```

# Parâmetros 
`example.txt` -> Arquivo de entrada localizado em `./data/in`
`example_table` -> Nome da tabela no qual a seed vai atuar e também o nome do arquivo de saída.
`column_name` -> Nome da columa onde a informações serão adicionadas 