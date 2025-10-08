void _ZN6zoxide4util3Fzf3new17hd8632d9a3c328694E(undefined8 param_1)

{
  char *local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  char *local_100;
  undefined8 local_f8;
  undefined local_f0 [224];
  
  _ZN3std7process7Command3new17h6afc37234c9fbbc3E(local_f0);
  local_120 = "--delimiter=\t";
  local_118 = 0xd;
  local_110 = "--nth=2";
  local_108 = 7;
  local_100 = "--read0";
  local_f8 = 7;
                    /* try { // try from 001927c9 to 001927e9 has its CatchHandler @ 00192808 */
  _ZN3std7process7Command4args17hff561736800d40a3E(local_f0,&local_120);
  _ZN3std7process7Command5stdin17h581bf7ebeac38de1E(local_f0);
  _ZN3std7process7Command6stdout17h4266e86ddff85105E(local_f0);
  (*(code *)PTR_memcpy_0023b550)(param_1,local_f0,0xe0);
  return;
}