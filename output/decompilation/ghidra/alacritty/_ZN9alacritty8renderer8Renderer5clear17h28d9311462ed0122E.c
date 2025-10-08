void _ZN9alacritty8renderer8Renderer5clear17h28d9311462ed0122E(float param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)((uint)param_2 & 0xff) / DAT_001ed1e8;
  if (DAT_001eb5d0 <= fVar1) {
    fVar1 = DAT_001eb5d0;
  }
  fVar2 = (float)(byte)((ulong)param_2 >> 8) / DAT_001ed1e8;
  if (DAT_001eb5d0 <= fVar2) {
    fVar2 = DAT_001eb5d0;
  }
  fVar3 = (float)((uint)((ulong)param_2 >> 0x10) & 0xff) / DAT_001ed1e8;
  if (DAT_001eb5d0 <= fVar3) {
    fVar3 = DAT_001eb5d0;
  }
  (*(code *)_ZN9alacritty2gl7storage10ClearColor17hdf1688bbf9319660E_0)
            (fVar1 * param_1,fVar2 * param_1,fVar3 * param_1);
                    /* WARNING: Could not recover jumptable at 0x0056d321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_ZN9alacritty2gl7storage5Clear17h2842efd9ecd418e5E_0)(0x4000);
  return;
}