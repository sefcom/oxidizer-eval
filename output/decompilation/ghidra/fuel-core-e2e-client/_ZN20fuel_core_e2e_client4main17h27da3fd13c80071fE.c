void _ZN20fuel_core_e2e_client4main17h27da3fd13c80071fE(void)

{
  undefined local_130 [104];
  undefined local_c8 [192];
  
  (*(code *)PTR__ZN20fuel_core_e2e_client15load_config_env17h0d99df9a2f88ebc8E_012b5f20)(local_c8);
                    /* try { // try from 00842483 to 0084248d has its CatchHandler @ 008424a7 */
  (*(code *)PTR__ZN13libtest_mimic4args9Arguments9from_args17hd526bf8ac4508238E_012b5f28)(local_130)
  ;
  (*(code *)PTR__ZN20fuel_core_e2e_client9main_body17h05540fc9600c63f6E_012b5f30)
            (local_c8,local_130);
  return;
}