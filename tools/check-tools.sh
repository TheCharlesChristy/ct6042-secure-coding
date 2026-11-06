#!/usr/bin/env bash
# AI generated scaffold. Reports which security/dev tools are installed. Installs nothing.
for c in java javac mvn gradle python3 node gcc clang gdb valgrind docker git \
         semgrep bandit trivy gitleaks cppcheck afl-fuzz syft grype; do
  if command -v "$c" >/dev/null; then printf '%-10s ok\n' "$c"; else printf '%-10s MISSING\n' "$c"; fi
done
echo; echo "ASan/UBSan:"; echo 'int main(){}' | gcc -fsanitize=address,undefined -x c - -o /dev/null && echo ok || echo MISSING
