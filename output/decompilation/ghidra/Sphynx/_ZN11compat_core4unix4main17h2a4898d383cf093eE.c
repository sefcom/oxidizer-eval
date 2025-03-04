void _ZN11compat_core4unix4main17h2a4898d383cf093eE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  (*(code *)PTR__ZN3std3ffi6os_str5OsStr12to_os_string17he37588f6694c0e54E_004f4a78)
            (&local_58,"/bin/vim-cmd",0xc);
  cVar1 = (*(code *)PTR__ZN3std4path4Path6exists17h396676b8852ed6a3E_004f3558)
                    (CONCAT44(uStack_54,local_58),local_48);
  if (CONCAT44(uStack_4c,uStack_50) != 0) {
    (*(code *)PTR___rust_dealloc_004f3b10)
              (CONCAT44(uStack_54,local_58),CONCAT44(uStack_4c,uStack_50),1);
  }
  if (cVar1 != '\0') {
    _ZN11compat_core4esxi4main17heca10f0d4c991be3E(param_1,param_2);
    return;
  }
  (*(code *)PTR__ZN13compat_kernel4core5stats5Stats13render_thread17h0458801fd31d2801E_004f4c48)
            (param_2);
  (*(code *)PTR__ZN13compat_kernel4core16platform_filters17he302441cd02098dfE_004f4a70)(&local_38);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  _ZN11compat_core5linux6search7default17hd80da9eb87aab2d8E(param_1,param_2,"/",1,&local_58);
  return;
}