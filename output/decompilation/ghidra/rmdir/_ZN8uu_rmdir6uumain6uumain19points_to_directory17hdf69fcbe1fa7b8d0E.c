long _ZN8uu_rmdir6uumain6uumain19points_to_directory17hdf69fcbe1fa7b8d0E(long param_1)

{
  int local_b8 [2];
  undefined8 local_b0;
  uint local_80;
  
  _ZN3std2fs8metadata17hfe9ee8a94a05f62bE(local_b8);
  if (local_b8[0] != 2) {
    *(bool *)(param_1 + 1) = (local_80 & 0xf000) == 0x4000;
  }
  else {
    *(undefined8 *)(param_1 + 8) = local_b0;
  }
  *(bool *)param_1 = local_b8[0] == 2;
  return param_1;
}