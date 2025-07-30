undefined8 * _ZN7spyware7logging4core8get_logs17h979297f7bb1c44d2E(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = _ZN7spyware7logging4core12MemoryLogger6global17h99d7eb6ce0974984E();
  if (lVar1 != 0) {
    _ZN7spyware7logging4core12MemoryLogger8get_logs17h68454e3110e201f1E(param_1,lVar1);
    return param_1;
  }
  *(undefined *)(param_1 + 1) = 0;
  *param_1 = 0x8000000000000000;
  return param_1;
}