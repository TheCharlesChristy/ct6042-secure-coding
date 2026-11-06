# CT6042 Secure Coding: Assessment 001 portfolio

Reading aids: [docs/](docs/). 

Personal AI limits: [docs/ai-statement.md](docs/ai-statement.md).

## General AI disclosure

This project has used AI for generating folder structure and initial scaffolding only. AI will not be used for writing solution code or the report.

## Layout

| Folder | Purpose |
|---|---|
| `01-web-identity/` | Web application or identity security |
| `02-deserialization-integrity/` | Unsafe Java deserialization or software/data integrity |
| `03-crypto-secrets/` | Cryptographic or secrets-management failure |
| `04-memory-safety/` | Memory-safety failure |
| `05-supply-chain/` | Supply-chain or build-integrity failure |
| `notes/` | Reading notes and the log of AI use |
| `tools/` | Tool check script and setup commands |

Each case study has the following:

| Folder | Purpose |
|---|---|
| `src/` | Source code, with `vulnerable/`, `mitigated/` and `common/` for shared modules |
| `tests/` | Test cases for the code |
| `evidence/before` | Evidence captured before mitigation |
| `evidence/after` | Evidence captured after mitigation |
| `CHECKLIST.md` | Checklist for the case study |

The report (including the SDLC and risk discussion) is written in a separate cloud-hosted Word document, not in this repo. Copy code and evidence into its appendix from each case study's folders.

## Ground rules

- Lab code only. Bind servers to localhost, use fake secrets and never aim exploits at anything you don't own.
- Run `tools/check-tools.sh` to see what's installed.
- Final submission file name: `CT6042_001_<student number>`, with no personal details inside.
