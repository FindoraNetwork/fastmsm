p9 += p8>>30;
p10 += p9>>30;
p11 += p10>>30;
p12 += p11>>30;
p13 += p12>>30;
p14 += p13>>30;
p15 += p14>>30;
p16 += p15>>30;
p17 += p16>>30;
p8 = p8 & mask;
p9 = p9 & mask;
p10 = p10 & mask;
p11 = p11 & mask;
p12 = p12 & mask;
p13 = p13 & mask;
p14 = p14 & mask;
p15 = p15 & mask;
p16 = p16 & mask;
q = p0 * 0x3FFCFFFD & 0x3FFFFFFFu;
p0 = p0 + q * 0x3FFFAAAB;
p1 = p1 + q * 0x27FBFFFF;
p2 = p2 + q * 0x153FFFFB;
p3 = p3 + q * 0x2AFFFFAC;
p4 = p4 + q * 0x30F6241E;
p5 = p5 + q * 0x034A83DA;
p6 = p6 + q * 0x112BF673;
p7 = p7 + q * 0x12E13CE1;
p8 = p8 + q * 0x2CD76477;
p9 = p9 + q * 0x1ED90D2E;
p10 = p10 + q * 0x29A4B1BA;
p11 = p11 + q * 0x3A8E5FF9;
p12 = p12 + q * 0x001A0111;
p1 = p1 + (p0 >> 30);
q = p1 * 0x3FFCFFFD & 0x3FFFFFFFu;
p1 = p1 + q * 0x3FFFAAAB;
p2 = p2 + q * 0x27FBFFFF;
p3 = p3 + q * 0x153FFFFB;
p4 = p4 + q * 0x2AFFFFAC;
p5 = p5 + q * 0x30F6241E;
p6 = p6 + q * 0x034A83DA;
p7 = p7 + q * 0x112BF673;
p8 = p8 + q * 0x12E13CE1;
p9 = p9 + q * 0x2CD76477;
p10 = p10 + q * 0x1ED90D2E;
p11 = p11 + q * 0x29A4B1BA;
p12 = p12 + q * 0x3A8E5FF9;
p13 = p13 + q * 0x001A0111;
p2 = p2 + (p1 >> 30);
q = p2 * 0x3FFCFFFD & 0x3FFFFFFFu;
p2 = p2 + q * 0x3FFFAAAB;
p3 = p3 + q * 0x27FBFFFF;
p4 = p4 + q * 0x153FFFFB;
p5 = p5 + q * 0x2AFFFFAC;
p6 = p6 + q * 0x30F6241E;
p7 = p7 + q * 0x034A83DA;
p8 = p8 + q * 0x112BF673;
p9 = p9 + q * 0x12E13CE1;
p10 = p10 + q * 0x2CD76477;
p11 = p11 + q * 0x1ED90D2E;
p12 = p12 + q * 0x29A4B1BA;
p13 = p13 + q * 0x3A8E5FF9;
p14 = p14 + q * 0x001A0111;
p3 = p3 + (p2 >> 30);
q = p3 * 0x3FFCFFFD & 0x3FFFFFFFu;
p3 = p3 + q * 0x3FFFAAAB;
p4 = p4 + q * 0x27FBFFFF;
p5 = p5 + q * 0x153FFFFB;
p6 = p6 + q * 0x2AFFFFAC;
p7 = p7 + q * 0x30F6241E;
p8 = p8 + q * 0x034A83DA;
p9 = p9 + q * 0x112BF673;
p10 = p10 + q * 0x12E13CE1;
p11 = p11 + q * 0x2CD76477;
p12 = p12 + q * 0x1ED90D2E;
p13 = p13 + q * 0x29A4B1BA;
p14 = p14 + q * 0x3A8E5FF9;
p15 = p15 + q * 0x001A0111;
p4 = p4 + (p3 >> 30);
q = p4 * 0x3FFCFFFD & 0x3FFFFFFFu;
p4 = p4 + q * 0x3FFFAAAB;
p5 = p5 + q * 0x27FBFFFF;
p6 = p6 + q * 0x153FFFFB;
p7 = p7 + q * 0x2AFFFFAC;
p8 = p8 + q * 0x30F6241E;
p9 = p9 + q * 0x034A83DA;
p10 = p10 + q * 0x112BF673;
p11 = p11 + q * 0x12E13CE1;
p12 = p12 + q * 0x2CD76477;
p13 = p13 + q * 0x1ED90D2E;
p14 = p14 + q * 0x29A4B1BA;
p15 = p15 + q * 0x3A8E5FF9;
p16 = p16 + q * 0x001A0111;
p5 = p5 + (p4 >> 30);
q = p5 * 0x3FFCFFFD & 0x3FFFFFFFu;
p5 = p5 + q * 0x3FFFAAAB;
p6 = p6 + q * 0x27FBFFFF;
p7 = p7 + q * 0x153FFFFB;
p8 = p8 + q * 0x2AFFFFAC;
p9 = p9 + q * 0x30F6241E;
p10 = p10 + q * 0x034A83DA;
p11 = p11 + q * 0x112BF673;
p12 = p12 + q * 0x12E13CE1;
p13 = p13 + q * 0x2CD76477;
p14 = p14 + q * 0x1ED90D2E;
p15 = p15 + q * 0x29A4B1BA;
p16 = p16 + q * 0x3A8E5FF9;
p17 = p17 + q * 0x001A0111;
p6 = p6 + (p5 >> 30);
q = p6 * 0x3FFCFFFD & 0x3FFFFFFFu;
p6 = p6 + q * 0x3FFFAAAB;
p7 = p7 + q * 0x27FBFFFF;
p8 = p8 + q * 0x153FFFFB;
p9 = p9 + q * 0x2AFFFFAC;
p10 = p10 + q * 0x30F6241E;
p11 = p11 + q * 0x034A83DA;
p12 = p12 + q * 0x112BF673;
p13 = p13 + q * 0x12E13CE1;
p14 = p14 + q * 0x2CD76477;
p15 = p15 + q * 0x1ED90D2E;
p16 = p16 + q * 0x29A4B1BA;
p17 = p17 + q * 0x3A8E5FF9;
p18 = p18 + q * 0x001A0111;
p7 = p7 + (p6 >> 30);
q = p7 * 0x3FFCFFFD & 0x3FFFFFFFu;
p7 = p7 + q * 0x3FFFAAAB;
p8 = p8 + q * 0x27FBFFFF;
p9 = p9 + q * 0x153FFFFB;
p10 = p10 + q * 0x2AFFFFAC;
p11 = p11 + q * 0x30F6241E;
p12 = p12 + q * 0x034A83DA;
p13 = p13 + q * 0x112BF673;
p14 = p14 + q * 0x12E13CE1;
p15 = p15 + q * 0x2CD76477;
p16 = p16 + q * 0x1ED90D2E;
p17 = p17 + q * 0x29A4B1BA;
p18 = p18 + q * 0x3A8E5FF9;
p19 = p19 + q * 0x001A0111;
p8 = p8 + (p7 >> 30);
q = p8 * 0x3FFCFFFD & 0x3FFFFFFFu;
p8 = p8 + q * 0x3FFFAAAB;
p9 = p9 + q * 0x27FBFFFF;
p10 = p10 + q * 0x153FFFFB;
p11 = p11 + q * 0x2AFFFFAC;
p12 = p12 + q * 0x30F6241E;
p13 = p13 + q * 0x034A83DA;
p14 = p14 + q * 0x112BF673;
p15 = p15 + q * 0x12E13CE1;
p16 = p16 + q * 0x2CD76477;
p17 = p17 + q * 0x1ED90D2E;
p18 = p18 + q * 0x29A4B1BA;
p19 = p19 + q * 0x3A8E5FF9;
p20 = p20 + q * 0x001A0111;
p9 = p9 + (p8 >> 30);
q = p9 * 0x3FFCFFFD & 0x3FFFFFFFu;
p9 = p9 + q * 0x3FFFAAAB;
p10 = p10 + q * 0x27FBFFFF;
p11 = p11 + q * 0x153FFFFB;
p12 = p12 + q * 0x2AFFFFAC;
p13 = p13 + q * 0x30F6241E;
p14 = p14 + q * 0x034A83DA;
p15 = p15 + q * 0x112BF673;
p16 = p16 + q * 0x12E13CE1;
p17 = p17 + q * 0x2CD76477;
p18 = p18 + q * 0x1ED90D2E;
p19 = p19 + q * 0x29A4B1BA;
p20 = p20 + q * 0x3A8E5FF9;
p21 = p21 + q * 0x001A0111;
p10 = p10 + (p9 >> 30);
q = p10 * 0x3FFCFFFD & 0x3FFFFFFFu;
p10 = p10 + q * 0x3FFFAAAB;
p11 = p11 + q * 0x27FBFFFF;
p12 = p12 + q * 0x153FFFFB;
p13 = p13 + q * 0x2AFFFFAC;
p14 = p14 + q * 0x30F6241E;
p15 = p15 + q * 0x034A83DA;
p16 = p16 + q * 0x112BF673;
p17 = p17 + q * 0x12E13CE1;
p18 = p18 + q * 0x2CD76477;
p19 = p19 + q * 0x1ED90D2E;
p20 = p20 + q * 0x29A4B1BA;
p21 = p21 + q * 0x3A8E5FF9;
p22 = p22 + q * 0x001A0111;
p11 = p11 + (p10 >> 30);
q = p11 * 0x3FFCFFFD & 0x3FFFFFFFu;
p11 = p11 + q * 0x3FFFAAAB;
p12 = p12 + q * 0x27FBFFFF;
p13 = p13 + q * 0x153FFFFB;
p14 = p14 + q * 0x2AFFFFAC;
p15 = p15 + q * 0x30F6241E;
p16 = p16 + q * 0x034A83DA;
p17 = p17 + q * 0x112BF673;
p18 = p18 + q * 0x12E13CE1;
p19 = p19 + q * 0x2CD76477;
p20 = p20 + q * 0x1ED90D2E;
p21 = p21 + q * 0x29A4B1BA;
p22 = p22 + q * 0x3A8E5FF9;
p23 = p23 + q * 0x001A0111;
p12 = p12 + (p11 >> 30);
q = p12 * 0x3FFCFFFD & 0x3FFFFFFFu;
p12 = p12 + q * 0x3FFFAAAB;
p13 = p13 + q * 0x27FBFFFF;
p14 = p14 + q * 0x153FFFFB;
p15 = p15 + q * 0x2AFFFFAC;
p16 = p16 + q * 0x30F6241E;
p17 = p17 + q * 0x034A83DA;
p18 = p18 + q * 0x112BF673;
p19 = p19 + q * 0x12E13CE1;
p20 = p20 + q * 0x2CD76477;
p21 = p21 + q * 0x1ED90D2E;
p22 = p22 + q * 0x29A4B1BA;
p23 = p23 + q * 0x3A8E5FF9;
p24 = p24 + q * 0x001A0111;
p13 = p13 + (p12 >> 30);
