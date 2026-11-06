# Tool setup (optional commands, run what you need)

> **AI generated scaffold:** created by Claude (Sonnet 5.5) as project setup only. It contains no solution code or report text.

Not run automatically. Review before running.

```bash
# Python-based scanners in an isolated venv
python3 -m venv .venv && source .venv/bin/activate
pip install semgrep bandit

# Apt tools
sudo apt install maven valgrind afl++ gitleaks

# Trivy / Syft / Grype: see each project's install docs (or run via docker)
```

Notes:
- `java` is 25 but `javac` is 17 on this machine. Pick one JDK (e.g. 17 LTS) for the deserialization case study so builds and runtime match.
- Use `-fsanitize=address,undefined` with gcc/clang for the memory-safety case study.
- Docker is installed, so labs can run in containers bound to localhost.
