long _ZN7flealib13fileencrypter13FileEncrypter12decrypt_file17h77bd17575c510ed1E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  int local_80;
  int local_7c;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_30 [4];
  int local_2c;
  long local_28;
  
  _ZN3std2fs4File4open17hb7998fa934f45aceE(&local_78);
  if ((local_78 & 1) != 0) {
    return CONCAT44(uStack_6c,uStack_70);
  }
  local_80 = iStack_74;
  local_48 = 0;
  uStack_40 = 1;
  local_38 = 0;
                    /* try { // try from 0048a822 to 0048a831 has its CatchHandler @ 0048a9ad */
  auVar3 = (*(code *)
             PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_008284f0
           )(&local_80,&local_48);
  if (auVar3._0_8_ != 0) {
                    /* try { // try from 0048a837 to 0048a843 has its CatchHandler @ 0048a9a8 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(&local_48);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_80);
    return auVar3._8_8_;
  }
  local_68 = local_38;
  local_78 = (uint)local_48;
  iStack_74 = local_48._4_4_;
  uStack_70 = (undefined4)uStack_40;
  uStack_6c = uStack_40._4_4_;
                    /* try { // try from 0048a866 to 0048a877 has its CatchHandler @ 0048a9a6 */
  _ZN7flealib13fileencrypter13FileEncrypter7decrypt17hff9e86b8c682ae6bE(&local_60,param_1,&local_78)
  ;
  local_68 = local_50;
  local_78 = local_60;
  iStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
                    /* try { // try from 0048a8ce to 0048a8dd has its CatchHandler @ 0048a978 */
  _ZN3std2fs4File6create17hefcfd813751427cbE(local_30,param_2,param_3);
  lVar2 = local_28;
  if ((local_30[0] & 1) == 0) {
    local_7c = local_2c;
                    /* try { // try from 0048a8fe to 0048a907 has its CatchHandler @ 0048a96a */
    lVar2 = _ZN3std2io5Write9write_all17h066e478a0016aabaE
                      (&local_7c,CONCAT44(uStack_6c,uStack_70),local_68);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_7c);
    if (lVar2 == 0) {
                    /* try { // try from 0048a94c to 0048a955 has its CatchHandler @ 0048a987 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_78);
      lVar2 = 0;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_80);
      lVar1 = CONCAT44(uStack_5c,local_60);
      goto joined_r0x0048a966;
    }
  }
                    /* try { // try from 0048a919 to 0048a922 has its CatchHandler @ 0048a987 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_78);
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_80);
  lVar1 = CONCAT44(uStack_5c,local_60);
joined_r0x0048a966:
  if (lVar1 == -0x8000000000000000) {
    _ZN4core3ptr124drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_core__error__Error_GT__GT__GT_17hf6714259a7336112E
              (&local_60);
  }
  return lVar2;
}