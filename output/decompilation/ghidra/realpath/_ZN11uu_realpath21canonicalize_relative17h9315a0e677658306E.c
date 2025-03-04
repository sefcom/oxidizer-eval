void _ZN11uu_realpath21canonicalize_relative17h9315a0e677658306E
               (long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  char local_48;
  undefined7 uStack_47;
  long local_40;
  long local_38;
  char local_30;
  
  _ZN6uucore8features2fs12canonicalize17h4be5c7a9ad65d7f1E(&local_50);
  lVar1 = CONCAT71(uStack_47,local_48);
  if (local_50 == -0x8000000000000000) {
    param_1[1] = lVar1;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_68 = local_50;
    local_58 = local_40;
    local_60 = lVar1;
                    /* try { // try from 001b6889 to 001b68a8 has its CatchHandler @ 001b6901 */
    if ((param_4 == '\x01') &&
       (cVar2 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(lVar1,local_40), cVar2 == '\0')) {
      _ZN3std2fs8read_dir17h4b97a66205288110E(&local_50,lVar1,local_40);
      if (local_48 == '\x02') {
        param_1[1] = local_50;
        *param_1 = -0x8000000000000000;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9cc26ee4129f6434E(&local_68);
        return;
      }
      local_38 = local_50;
      local_30 = local_48;
                    /* try { // try from 001b68d1 to 001b68da has its CatchHandler @ 001b6901 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h8145669f43335f0dE(&local_38);
    }
    param_1[2] = local_58;
    *param_1 = local_68;
    param_1[1] = local_60;
  }
  return;
}