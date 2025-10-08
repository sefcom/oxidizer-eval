void _ZN4just6search6Search31working_directory_from_justfile17hd51585d6fd438247E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = 0x8000000000000003;
  lVar1 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_2,param_3);
  if (lVar1 == 0) {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566a18)
              (&local_38,param_2,param_3);
    param_1[1] = local_38;
    param_1[2] = local_30;
    param_1[3] = uStack_28;
  }
  else {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566a18)
              (param_1 + 1,lVar1);
    uVar2 = 0x8000000000000006;
  }
  *param_1 = uVar2;
  return;
}