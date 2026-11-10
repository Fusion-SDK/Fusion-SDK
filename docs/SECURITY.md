[SECURITY.md](https://github.com/user-attachments/files/34641734/SECURITY.md)
# Security principles

- Treat community mods as untrusted code.
- Manual review is useful but is not proof that a mod is safe.
- Keep account credentials and service secrets out of mod packages.
- Sign official releases and verify hashes before installation.
- Use least-privilege service credentials and row-level security for user data.
- Make requested mod permissions understandable to users.
- Provide a way to disable or remove a mod.

This SDK does not implement sandboxing or permission enforcement. Those belong in the future loader/runtime design.
