void __fastcall uu_cp::handle_preserve(__int64 a1, char a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _BYTE v10[64]; // [rsp+0h] [rbp-98h] BYREF
  _OWORD v11[5]; // [rsp+40h] [rbp-58h] BYREF

  if ( a2 )
  {
    uu_cp::copy_attributes::{{closure}}(v10, a4, a5);
    v7 = *(_QWORD *)v10;
    if ( a3 )
    {
      if ( *(_QWORD *)v10 != 13LL )
      {
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v10[56];
        v8 = *(_OWORD *)&v10[8];
        v9 = *(_OWORD *)&v10[24];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v10[40];
        *(_OWORD *)(a1 + 24) = v9;
        *(_OWORD *)(a1 + 8) = v8;
        *(_QWORD *)a1 = v7;
        return;
      }
    }
    else if ( *(_QWORD *)v10 != 13LL )
    {
      v11[3] = *(_OWORD *)&v10[48];
      v11[2] = *(_OWORD *)&v10[32];
      v11[1] = *(_OWORD *)&v10[16];
      v11[0] = *(_OWORD *)v10;
      uu_cp::show_error_if_needed(v11, a4);
      core::ptr::drop_in_place<uu_cp::Error>(v11);
    }
  }
  *(_QWORD *)a1 = 13LL;
}
