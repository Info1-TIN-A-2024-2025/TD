# Useful commands for terminal

## List all files in a current directory
```bash
ls
```
List with details
```bash
ls -al
```
## Display the current directory
```bash
pwd
```

## Change directory
```bash
cd path_to_directory
```
Change to **parent** directory
```bash
cd ..
```

## Copy a directory `TEMPLATE` and its content to a new directory `TD20240920`
```bash
cp -r TEMPLATE TD20240920
```
## Create a new directory
```bash
mkdir directory_name
```

## Remove a directory
```bash
rmdir directory_name
```

## Remove a directory with all files
```bash
rm -rf directory_name
```

## Remove a file
```bash
rm file_name
```

## Compile a C program and genereate the executable named `app`
```bash
make app
```

Make a cleanup (remove `object` and `executable` files)
```bash
make clean
```

Make `all` (cleanup, compile and generate the executable)
```bash
make all
```

## Run a C program named `app`
```bash
./app
```

## Retrieve the return code of the last command
```bash
echo $?
```

## Display the content of a file
```bash
cat file_name
```

## Display the history of last commands
```bash
history
```
## Rerun the last command starting with `ls`
```bash
!ls
```

## Rerun the historic commande number 5
```bash
!5
```

## Rerun the last  command
```bash
!!
```



## Add the current directory to git

precondition: the current directory is the one we want to add
```bash
git add .
git commit -am "added directory xxx"
git push
```



