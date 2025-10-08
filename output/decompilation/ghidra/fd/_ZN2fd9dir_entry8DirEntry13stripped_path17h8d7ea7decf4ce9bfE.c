void _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE(undefined8 param_1,ulong param_2)

{
  undefined auVar1 [16];
  
  auVar1 = _ZN2fd9dir_entry8DirEntry4path17h16a39562ed47efc5E();
  if ((param_2 & 1) != 0) {
    _ZN2fd10filesystem17strip_current_dir17hccbc9a783f2543e7E(auVar1._0_8_,auVar1._8_8_);
    return;
  }
  return;
}