void _ZN4just9evaluator9Evaluator11run_command17h86d0b2f36f29e5c6E
               (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined local_1f0 [224];
  undefined local_110 [224];
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  _ZN4just8settings8Settings13shell_command17h194009976e056ef8E(local_1f0);
                    /* try { // try from 00366ced to 00366d8e has its CatchHandler @ 00366dca */
  _ZN3std7process7Command3arg17h20b967969329bd8eE(local_1f0,param_3,param_4);
  _ZN3std7process7Command4args17hed6295a6549d7923E(local_1f0,param_5,param_6);
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (local_110,lVar2,param_2[3]);
  _ZN3std7process7Command11current_dir17hb900367fa6eef4b5E(local_1f0,local_110);
  (*(code *)
    PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_6export17hbded0bf5acb950b5E_00566a40
  )(local_1f0,lVar2 + 0xa8,param_2[1],param_2 + 5,lVar2 + 0x238);
  _ZN3std7process7Command5stdin17hf565ff9df9f78a2aE(local_1f0,0);
  _ZN3std7process7Command6stderr17h9fed92c06b70fc7eE(local_1f0,*(char *)(lVar1 + 0x1a7) == '\0');
  _ZN3std7process7Command6stdout17h735b5e124ef77713E(local_1f0,2);
  (*(code *)PTR_memcpy_00565e28)(local_110,local_1f0,0xe0);
  (*(code *)
    PTR__ZN71__LT_std__process__Command_u20_as_u20_just__command_ext__CommandExt_GT_19output_guard_stdout17h162b0364341aa133E_00566a58
  )(param_1,local_110);
  return;
}