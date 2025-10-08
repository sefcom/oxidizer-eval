void _ZN9alacritty8renderer6shader13ShaderProgram20get_uniform_location17h89c89b44df60d4f2E
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (*(code *)_ZN9alacritty2gl7storage18GetUniformLocation17h3be57d0a0114f07aE_0)
                    (param_2,param_3);
  if (iVar1 == -1) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    uVar2 = 2;
  }
  else {
    *(int *)(param_1 + 1) = iVar1;
    uVar2 = 3;
  }
  *param_1 = uVar2;
  return;
}