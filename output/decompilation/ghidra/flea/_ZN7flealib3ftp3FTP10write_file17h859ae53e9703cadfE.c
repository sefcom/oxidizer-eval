long _ZN7flealib3ftp3FTP10write_file17h859ae53e9703cadfE(undefined8 param_1,long param_2)

{
  long lVar1;
  int local_24;
  byte local_20 [4];
  int local_1c;
  long local_18;
  
                    /* try { // try from 004a3a8d to 004a3a96 has its CatchHandler @ 004a3af4 */
  _ZN3std2fs4File6create17hb10f4de1cd0f279aE(local_20,param_1);
  lVar1 = local_18;
  if ((local_20[0] & 1) == 0) {
    local_24 = local_1c;
                    /* try { // try from 004a3ab5 to 004a3abe has its CatchHandler @ 004a3ae6 */
    lVar1 = _ZN3std2io5Write9write_all17h066e478a0016aabaE
                      (&local_24,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_24);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(param_2);
  return lVar1;
}