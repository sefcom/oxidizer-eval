bool _ZN2fd10exit_codes8ExitCode8is_error17h64a24a6b89618eb1E(byte param_1)

{
  byte bVar1;
  
  bVar1 = 1;
  if ((byte)(param_1 - 2) < 4) {
    bVar1 = param_1 - 2;
  }
  if (bVar1 - 2 < 2) {
    return true;
  }
  if (bVar1 == 0) {
    return false;
  }
  return (param_1 & 1) == 0;
}