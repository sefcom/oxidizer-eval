long _ZN18alacritty_terminal4sync18FairMutex_LT_T_GT_4lock17h8771cda87d96e8b1E(long param_1)

{
  _ZN78__LT_parking_lot__raw_mutex__RawMutex_u20_as_u20_lock_api__mutex__RawMutex_GT_4lock17h8f21b5fe103f8e9aE
            (param_1 + 0x6f0);
                    /* try { // try from 0046eed6 to 0046eedd has its CatchHandler @ 0046eef1 */
  _ZN78__LT_parking_lot__raw_mutex__RawMutex_u20_as_u20_lock_api__mutex__RawMutex_GT_4lock17h8f21b5fe103f8e9aE
            (param_1);
  _ZN4core3ptr157drop_in_place_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C_alacritty_terminal__term__Term_LT_alacritty__event__EventProxy_GT__GT__GT_17h090449980f2d2d72E
            (param_1 + 0x6f0);
  return param_1;
}