ulong _ZN5uu_rm12is_dir_empty17h0b58628bb17a83e8E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined8 local_18;
  char local_10;
  
  _ZN3std2fs8read_dir17h8c3d3d6768148fc1E(&local_18,param_1,param_2);
  if (local_10 == '\x02') {
    uVar2 = 0;
  }
  else {
                    /* try { // try from 0015c7b4 to 0015c7bb has its CatchHandler @ 0015c7d9 */
    lVar1 = _ZN4core4iter6traits8iterator8Iterator4fold17h262ac07fe20bb310E(local_18,local_10);
    uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),lVar1 == 0);
    if (local_10 != '\x02') goto LAB_0015c7d1;
  }
  _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17hddcf8dec030b5fbcE
            (&local_18);
LAB_0015c7d1:
  return uVar2 & 0xffffffff;
}