undefined8
_ZN4just14signal_handler13SignalHandler7install17h1f89de96e5897972E
          (undefined8 param_1,undefined param_2)

{
  long lVar1;
  byte extraout_DL;
  
  lVar1 = _ZN4just14signal_handler13SignalHandler8instance17h68aa94a07828712fE();
  *(undefined *)(lVar1 + 0x24) = param_2;
                    /* try { // try from 0038a61f to 0038a626 has its CatchHandler @ 0038a641 */
  _ZN4just8platform4unix98__LT_impl_u20_just__platform_interface__PlatformInterface_u20_for_u20_just__platform__Platform_GT_22install_signal_handler17hba26c624466e5775E
            (param_1);
  _ZN4core3ptr100drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_just__signal_handler__SignalHandler_GT__GT_17hf98ecd4a30a182c6E
            (lVar1,extraout_DL & 1);
  return param_1;
}