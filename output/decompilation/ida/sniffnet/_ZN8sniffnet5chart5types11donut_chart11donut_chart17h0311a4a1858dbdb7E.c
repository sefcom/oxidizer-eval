__int64 __fastcall sniffnet::chart::types::donut_chart::donut_chart(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 *a8,
        char a9)
{
  __int64 v9; // r14
  __int128 v10; // xmm1
  _OWORD v12[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-D8h]
  __int64 v14; // [rsp+28h] [rbp-D0h]
  __int64 v15; // [rsp+30h] [rbp-C8h]
  __int64 v16; // [rsp+38h] [rbp-C0h]
  __int128 v17; // [rsp+40h] [rbp-B8h]
  char v18; // [rsp+50h] [rbp-A8h]
  char v19; // [rsp+51h] [rbp-A7h]
  __int16 v20; // [rsp+60h] [rbp-98h]
  int v21; // [rsp+64h] [rbp-94h]
  __int16 v22; // [rsp+68h] [rbp-90h]
  int v23; // [rsp+6Ch] [rbp-8Ch]
  _BYTE v24[136]; // [rsp+70h] [rbp-88h] BYREF

  v9 = 0x42DC000000000003LL;
  if ( a9 )
    v9 = 0x42DC000000000000LL;
  v10 = *a8;
  v12[1] = a8[1];
  v12[0] = v10;
  v20 = 3;
  v21 = 1120403456;
  v22 = 3;
  v23 = 1120403456;
  v14 = a4;
  v13 = a3;
  v16 = a6;
  v15 = a5;
  v17 = a7;
  v18 = a9;
  v19 = a2;
  ((void (__fastcall *)(_BYTE *, _OWORD *, __int64))iced_widget::canvas::Canvas<P,Message,Theme,Renderer>::width)(
    v24,
    v12,
    v9);
  return iced_widget::canvas::Canvas<P,Message,Theme,Renderer>::height(a1, v24, v9, *(double *)&a7);
}