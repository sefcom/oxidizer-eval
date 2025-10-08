long _ZN11uu_realpath21canonicalize_relative17ha3a23c9727c26a2fE
               (long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_58;
  char local_50;
  undefined7 uStack_4f;
  long local_48;
  long local_40;
  char local_38;
  
  _ZN6uucore8features2fs12canonicalize17h7cde29b0af4066d7E(&local_58);
  lVar1 = local_58;
  lVar3 = CONCAT71(uStack_4f,local_50);
  lVar2 = -local_58;
                    /* try { // try from 00162d2a to 00162d87 has its CatchHandler @ 00162da2 */
  if ((param_4 == '\x01') &&
     (lVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f3350)(lVar3,local_48),
     (char)lVar2 == '\0')) {
    _ZN3std2fs8read_dir17h45c5fe38c359e267E(&local_58,lVar3,local_48);
    if (local_50 == '\x02') {
      param_1[1] = local_58;
      *param_1 = -0x8000000000000000;
      lVar3 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb5b343c2ee7576a0E(lVar1,lVar3)
      ;
      return lVar3;
    }
    local_40 = local_58;
    local_38 = local_50;
    lVar2 = _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hbf19dde921508ab7E(&local_40);
  }
  *param_1 = lVar1;
  param_1[1] = lVar3;
  param_1[2] = local_48;
  return lVar2;
}