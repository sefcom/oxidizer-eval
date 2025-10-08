void _ZN10uu_install29set_ownership_and_permissions17h4b3ae3ef285be2d9E
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_58;
  undefined local_50 [56];
  
  uVar2 = 0x1ed;
  if (*(char *)(param_3 + 0x48) != '\0') {
    uVar2 = *(undefined4 *)(param_3 + 0x4c);
  }
  cVar1 = _ZN10uu_install4mode5chmod17hdfca6c9c8a923e56E(param_1,param_2,uVar2);
  if (cVar1 == '\0') {
    _ZN10uu_install25chown_optional_user_group17h803ff07f1543e95dE(param_1,param_2,param_3);
  }
  else {
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (local_50,param_1,param_2);
    local_58 = 3;
    _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_58);
  }
  return;
}