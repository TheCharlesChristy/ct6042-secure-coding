# Requirements

> **AI generated:** extracted from the Moodle assessment brief HTML by Claude (Sonnet 5.5). It is a reading aid only, contains no assessment content, and the Moodle brief is the authoritative source.

## Context

Modern applications are assembled from source code, frameworks, third-party dependencies, APIs, authentication services, build systems and deployment configurations. Security failures can originate from insecure code, inappropriate design decisions, vulnerable dependencies, configuration errors or weaknesses in the build and delivery process.

Secure development requires more than fixing vulnerabilities after discovery. Developers must identify threats, implement controls, use security testing tools, evaluate the limitations of those tools and produce evidence that mitigations stay effective throughout the software development lifecycle.

## Task

Create, review and improve a collection of controlled laboratory examples, and produce a portfolio. For each vulnerability class, the portfolio must:

1. **Explain and contextualise** the vulnerability. Cover the underlying security theory and identify the weakness with an appropriate classification (e.g. CWE or OWASP).
2. **Demonstrate exploitation** with code examples.
3. **Demonstrate testing** that identified the vulnerability, using appropriate techniques and tools. Examples: SAST, DAST, SCA, fuzzing, runtime memory-safety testing, automated unit, integration or regression testing.
4. **Demonstrate mitigation**: the security measures put in place, with justification.
5. **Retest** to confirm the code is resilient to the chosen attack.

## Required case studies (one from each class)

| # | Vulnerability class | Examples given in the brief |
|---|---|---|
| 1 | Web application or identity security | Injection, cross-site scripting, broken access control, insecure session management, inappropriate OAuth 2.0 implementation, ineffective anti-automation controls |
| 2 | Unsafe Java deserialization or software/data integrity | (none listed) |
| 3 | Cryptographic or secrets-management failure | (none listed) |
| 4 | Memory-safety failure | Buffer overflow, use-after-free, integer overflow, or another appropriate memory corruption vulnerability |
| 5 | Software supply-chain or build-integrity failure | Vulnerable dependency, dependency confusion, insecure package selection, exposed secret, unverified build artefact, insecure CI/CD configuration |

## General discussion (also required)

- The importance of the Security Development Life Cycle
- Product risk assessment and risk analysis

## Other requirements

- **Word count:** 3000 words (+/- 10%), excluding title pages, references and appendix sections.
- **Working:** alone.
- **Appendices:** the marking criteria refer to complete source-code appendices, and to captioned and referenced code, screenshots and tool results.
- **AI disclosure:** required, placed after the conclusion and before the reference list. See [ai-guidelines.md](ai-guidelines.md).
