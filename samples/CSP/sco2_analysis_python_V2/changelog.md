# Changelog

All notable changes to this project will be documented in this file.

## [2025.10.22]
### Git Commits
- **SSC**: https://github.com/NREL/ssc/commit/0276c6cc1cdeeeecbd8533078d33c0fe35c348ae
- **SAM**: https://github.com/NREL/SAM/commit/b543f650f69af203f843b65537d1839e6d7cc109
### Added
- Two new cycle configurations:
  - Recompression with HTR Bypass
  - Turbine Split Flow
- Inflation year parameter (`yr_inflation`)
  - Modifies cycle component costs to target inflation year
- Thermal efficiency cutoff
  - Prevents finalization of component designs if efficiency is below the threshold

### Changed
- Recuperator cost model
  - Adds temperature-based cost factor for temperatures above 550 °C
  - Based on Weiland et al., 2019
- Axial turbine cost model
  - Adds temperature-based cost factor for inlet temperatures above 550 °C
  - Based on Weiland et al., 2019
- Optimization objective metric calculation
  - Improved behavior when using a minimum temperature difference (`min_phx_deltaT`)

### Fixed
- Improved stability of air cooler convergence at low cycle efficiencies
- Fixed bug solving heat exchangers with low effectiveness due to pinch points
- Fixed heat exchanger bug with 2-phase cold fluid stream