void _ZN7spyware7logging13memory_logger18CircularMemoryLogs12get_all_logs17hfa3a03f9a722fe3cE
               (undefined8 param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined local_30 [24];
  
  _ZN3std3sys4sync6rwlock5futex6RwLock4read17hbe2226c9acb137cdE(param_2);
  _ZN3std4sync6rwlock24RwLockReadGuard_LT_T_GT_3new17haf4ee7d01335bbb9E(local_30,param_2);
  auVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h8e28e672987e3baaE(local_30);
                    /* try { // try from 00157262 to 00157273 has its CatchHandler @ 00157285 */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17he350fd6b813e3a35E
            (param_1,auVar1._0_8_,&PTR_s_src_logging_memory_logger_rs_001b9c70);
  _ZN4core3ptr107drop_in_place_LT_std__sync__rwlock__RwLockReadGuard_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hb0b5943e5e9bd725E
            (auVar1._8_8_);
  return;
}