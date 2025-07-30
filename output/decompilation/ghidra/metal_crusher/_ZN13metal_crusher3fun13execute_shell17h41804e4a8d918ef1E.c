void _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined local_124 [28];
  undefined local_108 [32];
  undefined local_e8 [208];
  
  _ZN3std7process7Command3new17h6d3aaa833949df8fE(local_e8,"sh",2);
                    /* try { // try from 0048741b to 00487459 has its CatchHandler @ 0048747b */
  uVar1 = _ZN3std7process7Command3arg17haecf4a6cb2423ef4E(local_e8,"-c",2);
  uVar1 = _ZN3std7process7Command3arg17haecf4a6cb2423ef4E(uVar1,param_1,param_2);
  (*(code *)PTR__ZN3std7process7Command5spawn17h1d40ae7470d68ce1E_006b4100)(local_108,uVar1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3cf09c7da6405573E(local_124,local_108);
  _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17h338c26869b6bbf8eE(local_124);
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17hbedacef7695b2f24E(local_e8);
  return;
}