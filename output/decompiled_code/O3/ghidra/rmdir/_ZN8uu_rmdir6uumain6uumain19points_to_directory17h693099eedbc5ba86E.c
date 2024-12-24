long __rustcall uu_rmdir::uumain::uumain::points_to_directory(long param_1)

{
  int local_b8 [2];
  undefined8 local_b0;
  uint local_80;
  
  std::fs::metadata(local_b8);
  if (local_b8[0] != 2) {
    *(bool *)(param_1 + 1) = (local_80 & 0xf000) == 0x4000;
  }
  else {
    *(undefined8 *)(param_1 + 8) = local_b0;
  }
  *(bool *)param_1 = local_b8[0] == 2;
  return param_1;
}