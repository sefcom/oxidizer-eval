void _ZN4just8settings8Settings13shell_command17h194009976e056ef8E(undefined8 param_1)

{
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  
  _ZN4just8settings8Settings5shell17hd5c075b0126ed5e7E(&local_100);
                    /* try { // try from 00389f34 to 00389f3d has its CatchHandler @ 00389f96 */
  _ZN3std7process7Command3new17h281cbb85ffe7a00fE(&local_100,local_100,local_f8);
  local_118 = local_f0;
  local_110 = local_e8;
  local_108 = local_e0;
                    /* try { // try from 00389f4c to 00389f58 has its CatchHandler @ 00389f7b */
  _ZN3std7process7Command4args17hddbcb025d407e375E(&local_100,&local_118);
  (*(code *)PTR_memcpy_00565e28)(param_1,&local_100,0xe0);
  return;
}