void _ZN9alacritty9scheduler9Scheduler10unschedule17h47626c0d73e9c11fE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined param_4)

{
  byte bVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40;
  undefined local_38 [32];
  
  local_48 = param_3;
  local_40 = param_4;
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h6161f52003526c91E
            (local_38,param_2 + 0x20);
  local_50 = 0;
  bVar1 = _ZN109__LT_alloc__collections__vec_deque__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hdd31d0ab13d4ed33E
                    (local_38,&local_48,&local_50);
  if ((bVar1 & 1) == 0) {
    *param_1 = 2;
  }
  else {
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_6remove17he23600ef9ffacdc5E
              (param_1,param_2 + 0x20);
  }
  return;
}