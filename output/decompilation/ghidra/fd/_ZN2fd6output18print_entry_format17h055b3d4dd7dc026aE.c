undefined8
_ZN2fd6output18print_entry_format17h055b3d4dd7dc026aE
          (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  
  auVar2 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE
                     (param_2,*(undefined *)(param_3 + 0x1e7));
  _ZN2fd3fmt14FormatTemplate8generate17hfff854f5585a67ffE
            (&local_88,param_4,auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_3 + 0x170),
             *(undefined8 *)(param_3 + 0x178));
                    /* try { // try from 002f6c09 to 002f6c19 has its CatchHandler @ 002f6cb0 */
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0053ff38)
            (local_30,local_80,local_78);
  local_68 = 
  _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h339b4df17109b8deE;
  local_60 = &DAT_00170810;
  local_58 = 1;
  local_40 = 0;
  local_50 = &local_70;
  local_48 = 1;
                    /* try { // try from 002f6c5c to 002f6c68 has its CatchHandler @ 002f6c8f */
  local_70 = local_30;
  uVar1 = _ZN3std2io5Write9write_fmt17h323bfdffb85eb317E(param_1,&local_60);
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h7308b79749514aeeE
            (local_88,local_80);
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h20faf5157999b1c6E(local_30);
  return uVar1;
}