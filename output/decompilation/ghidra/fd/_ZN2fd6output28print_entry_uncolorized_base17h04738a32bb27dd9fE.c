long _ZN2fd6output28print_entry_uncolorized_base17h04738a32bb27dd9fE
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_30;
  code *local_28;
  
  uVar1 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE
                    (param_2,*(undefined *)(param_3 + 0x1e7));
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
            (&local_78,uVar1);
                    /* try { // try from 002f7285 to 002f728e has its CatchHandler @ 002f735c */
  _ZN2fd6output22replace_path_separator17h23f8702077a731dcE
            (&local_60,CONCAT44(uStack_6c,uStack_70),local_68,*(undefined8 *)(param_3 + 0x170),
             *(undefined8 *)(param_3 + 0x178));
                    /* try { // try from 002f728f to 002f7296 has its CatchHandler @ 002f733f */
  _ZN5alloc6borrow12Cow_LT_B_GT_6to_mut17he3d567039a061c09E(&local_78);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6194a405d9e61c9bE(&local_78);
  local_68 = local_50;
  local_78 = (undefined4)local_60;
  uStack_74 = local_60._4_4_;
  uStack_70 = (undefined4)uStack_58;
  uStack_6c = uStack_58._4_4_;
  local_28 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h339b4df17109b8deE;
  local_60 = &DAT_00170810;
  uStack_58 = 1;
  local_40 = 0;
  local_50 = &local_30;
  local_48 = 1;
                    /* try { // try from 002f72f4 to 002f7324 has its CatchHandler @ 002f735c */
  local_30 = (undefined *)&local_78;
  lVar2 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_60);
  if (lVar2 == 0) {
    lVar2 = _ZN2fd6output20print_trailing_slash17h43af0d27fcc999ecE
                      (param_1,param_2,*(undefined8 *)(param_3 + 0xb8),
                       *(undefined8 *)(param_3 + 0xc0),0);
  }
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E(&local_78);
  return lVar2;
}