find . -name "*.sh" | sed "s/\.sh//" | sed "s/.\///" | rev | cut -d / -f 1 | rev
