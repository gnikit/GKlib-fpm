# GKlib for fpm

This is a repackaging of the [GKlib](https://github.com/KarypisLab/GKlib) library, developed by Karypis Lab for use with the Fortran Package Manager (fpm).

## TODO

- [ ] Run tests in CI
- [ ] Make CI open a PR for changes if the repository is dirty

## Usage

```sh
fpm build
```

To use `GKlib` as a dependency in your `fpm` project, add the following to your `fpm.toml` file:

```toml
[dependencies]
gklib = { git="https://github.com/gnikit/GKlib.git" }
```

## License

> Apache License, Version 2.0

The original [GKlib](https://github.com/karypislab/GKlib) is licensed under
Apache License, Version 2.0. This repository is a repackaging of the original GKlib
without any significant modifications or improvements. As such we believe that
attribution should still be given to the original authors and hence choose to
distribute the repackaged version under the same license as the original.
