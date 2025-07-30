void _ZN7spyware7logging4core12MemoryLogger8get_logs17h68454e3110e201f1E
               (undefined8 param_1,long param_2)

{
  undefined auVar1 [16];
  undefined local_30 [24];
  
  _ZN3std3sys4sync6rwlock5futex6RwLock4read17hbe2226c9acb137cdE(param_2 + 0x18);
  _ZN3std4sync6rwlock24RwLockReadGuard_LT_T_GT_3new17h096560ed84c59029E(local_30,param_2 + 0x18);
  auVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h0ee99c6f1ef24d89E(local_30);
                    /* try { // try from 00156f16 to 00156f20 has its CatchHandler @ 00156f32 */
  _ZN7spyware7logging13memory_logger18CircularMemoryLogs12get_all_logs17hfa3a03f9a722fe3cE
            (param_1,auVar1._0_8_);
  _ZN4core3ptr107drop_in_place_LT_std__sync__rwlock__RwLockReadGuard_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hb0b5943e5e9bd725E
            (auVar1._8_8_);
  return;
}