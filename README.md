# Paired Watershed Studies
These C codes are the output of the model with the best predictive ability as identified in the associated paper. The codes may be used to score (i.e make predictions of) water yield response (%) using new data on the seven vegetation-to-bedrock factors: 

[1] AET: actual evapotranspiration; [2] Catchment area (km2); [3] PET: potential evapotranspiration; [4] RC_Beck (fraction): runoff coefficient, i.e. the ratio of long-term runoff or streamflow to precipitation; [5] RootZoneStorage (mm/y): plant-available rooting-zone water-storage capacity; [6] k (perm): permeability; [7] total pore amount (mm): potential storage.

These codes must be compiled into a library and then linked into an application so that it can be used to score new data. The compilation instructions depend on the target platform and operation system. The .h files needed for compiling and linking are included here.

The codes are the basis for the analyses in: Evaristo, J. & McDonnell, J. J. Global analysis of streamflow response to forest management. Nature 570, 455–461 (2019).
