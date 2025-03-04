void __fastcall uu_cp::handle_preserve(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _BYTE v9[64]; // [rsp+0h] [rbp-98h] BYREF
  _OWORD v10[5]; // [rsp+40h] [rbp-58h] BYREF

  if ( a2 )
  {
    uu_cp::copy_attributes::{{closure}}(v9, a4);
    v6 = *(_QWORD *)v9;
    if ( a3 )
    {
      if ( *(_QWORD *)v9 != 13LL )
      {
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v9[56];
        v7 = *(_OWORD *)&v9[8];
        v8 = *(_OWORD *)&v9[24];
        *(_OWORD *)(a1 + 40) = *(_OWORD *)&v9[40];
        *(_OWORD *)(a1 + 24) = v8;
        *(_OWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = v6;
        return;
      }
    }
    else if ( *(_QWORD *)v9 != 13LL )
    {
      v10[3] = *(_OWORD *)&v9[48];
      v10[2] = *(_OWORD *)&v9[32];
      v10[1] = *(_OWORD *)&v9[16];
      v10[0] = *(_OWORD *)v9;
      uu_cp::show_error_if_needed(v10, a4);
      core::ptr::drop_in_place<uu_cp::Error>(v10);
    }
  }
  *(_QWORD *)a1 = 13LL;
}
