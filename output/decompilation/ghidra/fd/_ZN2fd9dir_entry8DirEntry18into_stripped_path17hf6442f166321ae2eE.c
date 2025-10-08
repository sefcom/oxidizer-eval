void _ZN2fd9dir_entry8DirEntry18into_stripped_path17hf6442f166321ae2eE
               (undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) != 0) {
                    /* try { // try from 002f1d2c to 002f1d47 has its CatchHandler @ 002f1d66 */
    uVar1 = _ZN2fd9dir_entry8DirEntry13stripped_path17h8d7ea7decf4ce9bfE(param_2,param_3);
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00540648)
              (param_1,uVar1);
    _ZN4core3ptr44drop_in_place_LT_fd__dir_entry__DirEntry_GT_17h394f0ee2b950b509E(param_2);
    return;
  }
  _ZN2fd9dir_entry8DirEntry9into_path17h5b05848c102c5466E(param_1);
  return;
}