void _ZN9alacritty8renderer4text12TextRenderer6resize17h29ae557e2ecc5169E
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           _ZN107__LT_alacritty__renderer__text__glsl3__Glsl3Renderer_u20_as_u20_alacritty__renderer__text__TextRenderer_GT_7program17heb273d7928d7c1fbE
                     ();
  (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)(*puVar1);
  _ZN9alacritty8renderer4text17update_projection17h3b47cfa7fc1313deE(puVar1[1],param_2);
                    /* WARNING: Could not recover jumptable at 0x0056b9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)_ZN9alacritty2gl7storage10UseProgram17h8c17565e1cab04caE_0)(0);
  return;
}