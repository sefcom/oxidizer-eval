void _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten17hed61544ade0f7ed1E
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined local_110 [256];
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0) {
    _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten14recurse_binary17h026cf51245cd5d13E
              (param_3,4,0,4,0,param_4,param_5,param_6,local_110);
  }
  else if (param_2 == 1) {
                    /* try { // try from 0040669b to 00406719 has its CatchHandler @ 00406736 */
    _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten15recurse_compare17h864917a931c07552E
              (param_3,4,0,4,0,param_4,param_5,param_6,local_110);
  }
  else {
    _ZN21ruff_python_formatter10expression11binary_like10BinaryLike7flatten12recurse_bool17hbfd4616a4c6c4b7aE
              (param_3,4,0,4,0,param_4,param_5,param_6,local_110);
  }
  (*(code *)PTR_memcpy_006bd3d0)(param_1,local_110,0x108);
  return;
}