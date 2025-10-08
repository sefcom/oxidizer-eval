__int64 __fastcall sniffnet::utils::types::icon::Icon::to_text(__int64 a1, char a2)
{
  unsigned int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  _BYTE v6[24]; // [rsp+8h] [rbp-90h] BYREF
  _DWORD v7[30]; // [rsp+20h] [rbp-78h] BYREF

  v2 = sniffnet::utils::types::icon::Icon::codepoint(a2);
  v7[0] = 0;
  v3 = core::char::methods::encode_utf8_raw(v2, v7, 4LL);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v6, v3, v4);
  iced_core::widget::text::Text<Theme,Renderer>::new(v7, v6);
  return iced_core::widget::text::Text<Theme,Renderer>::font(a1, v7, &unk_2DFF038);
}