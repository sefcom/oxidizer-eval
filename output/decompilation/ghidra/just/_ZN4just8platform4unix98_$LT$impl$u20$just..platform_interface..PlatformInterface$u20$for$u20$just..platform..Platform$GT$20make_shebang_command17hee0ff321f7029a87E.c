undefined8
_ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_20make_shebang_command17hee0ff321f7029a87E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined local_f0 [224];
  
  _ZN3std7process7Command3new17h281cbb85ffe7a00fE(local_f0,param_3,param_4);
  if (param_6 != 0) {
                    /* try { // try from 003829dd to 003829e9 has its CatchHandler @ 00382a0b */
    _ZN3std7process7Command11current_dir17h92a579a9f249f22bE(local_f0,param_6,param_7);
  }
  (*(code *)PTR_memcpy_00565e28)(param_1,local_f0,0xe0);
  return param_1;
}