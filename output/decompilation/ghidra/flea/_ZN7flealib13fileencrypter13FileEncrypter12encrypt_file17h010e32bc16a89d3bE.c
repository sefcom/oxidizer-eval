long _ZN7flealib13fileencrypter13FileEncrypter12encrypt_file17h010e32bc16a89d3bE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  int local_9c;
  uint local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [8];
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  _ZN3std2fs4File4open17hb7998fa934f45aceE(&local_98);
  if ((local_98 & 1) == 0) {
    local_9c = iStack_94;
    local_80 = 0;
    local_78 = 1;
    local_70 = 0;
                    /* try { // try from 0048a655 to 0048a686 has its CatchHandler @ 0048a7aa */
    auVar2 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_008284f0
             )(&local_9c,&local_80);
    lVar1 = auVar2._8_8_;
    if (auVar2._0_8_ == 0) {
      (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h44ed577670f061c9E_00826d80)
                (local_68,local_78,local_70);
                    /* try { // try from 0048a691 to 0048a6c3 has its CatchHandler @ 0048a787 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
                (&local_98,local_60,local_58);
      local_28 = local_88;
      local_38 = local_98;
      iStack_34 = iStack_94;
      uStack_30 = uStack_90;
      uStack_2c = uStack_8c;
      _ZN7flealib13fileencrypter13FileEncrypter7encrypt17h95176c86bdb309f0E
                (local_50,param_1,&local_38);
                    /* try { // try from 0048a6c4 to 0048a6dd has its CatchHandler @ 0048a778 */
      _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hb29927c53dd8f325E(local_68)
      ;
      _ZN3std2fs4File6create17hefcfd813751427cbE(&local_98,param_2,param_3);
      if ((local_98 & 1) == 0) {
        local_68[0] = iStack_94;
                    /* try { // try from 0048a6fe to 0048a707 has its CatchHandler @ 0048a76a */
        lVar1 = _ZN3std2io5Write9write_all17h066e478a0016aabaE(local_68,local_48,local_40);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_68[0]);
        if (lVar1 == 0) {
                    /* try { // try from 0048a748 to 0048a751 has its CatchHandler @ 0048a7aa */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(local_50)
          ;
                    /* try { // try from 0048a752 to 0048a75b has its CatchHandler @ 0048a796 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE
                    (&local_80);
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_9c);
          return 0;
        }
      }
      else {
        lVar1 = CONCAT44(uStack_8c,uStack_90);
      }
                    /* try { // try from 0048a719 to 0048a722 has its CatchHandler @ 0048a7aa */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(local_50);
    }
                    /* try { // try from 0048a723 to 0048a72c has its CatchHandler @ 0048a796 */
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(&local_80);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_9c);
  }
  else {
    lVar1 = CONCAT44(uStack_8c,uStack_90);
  }
  return lVar1;
}