__int64 __fastcall metal_crusher::fun::reanimate_gui_shell()
{
  __int64 v0; // rax
  __int64 v2; // [rsp-8h] [rbp-8h]

  v2 = v0;
  if ( (unsigned __int8)metal_crusher::fun::is_kde_plasma() )
    return metal_crusher::fun::execute_shell((__int64)aPlasmashell_0, 11LL);
  else
    return v2;
}