/*****************************************************************************
 * This software is distributed under the terms of the General Public License.
 *
 * Program :        kastrolog 5.4-2
 * Authors : see the AUTHORS file
 * E-Mail  : Llyra@altavista.com
*****************************************************************************/ 


/**********************************************************************

	--- Qt Architect generated file ---

	File: SetColorsData.cpp
	Last generated: Mon Oct 18 15:14:38 1999

	DO NOT EDIT!!!  This file will be automatically
	regenerated by qtarch.  All changes will be lost.

 *********************************************************************/

#include <qpixmap.h>
#include <qlayout.h>
#include "SetColorsData.h"

#define Inherited QDialog

#include <qpushbt.h>

SetColorsData::SetColorsData
(
	QWidget* parent,
	const char* name
)
	:
	Inherited( parent, name, TRUE, 0 )
{
	Aspects = new QButtonGroup( this, "ButtonGroup_2" );
	Aspects->setGeometry( 230, 80, 300, 240 );
	Aspects->setMinimumSize( 0, 0 );
	Aspects->setMaximumSize( 32767, 32767 );
	connect( Aspects, SIGNAL(clicked(int)), SLOT(aspectsslot(int)) );
	Aspects->setFocusPolicy( QWidget::NoFocus );
	Aspects->setBackgroundMode( QWidget::PaletteBackground );
	Aspects->setFontPropagation( QWidget::NoChildren );
	Aspects->setPalettePropagation( QWidget::NoChildren );
	Aspects->setFrameStyle( 49 );
	Aspects->setTitle( transl("Aspects") );
	Aspects->setAlignment( 1 );

	Elements = new QButtonGroup( this, "ButtonGroup_1" );
	Elements->setGeometry( 230, 20, 300, 50 );
	Elements->setMinimumSize( 0, 0 );
	Elements->setMaximumSize( 32767, 32767 );
	connect( Elements, SIGNAL(clicked(int)), SLOT(elementsslot(int)) );
	Elements->setFocusPolicy( QWidget::NoFocus );
	Elements->setBackgroundMode( QWidget::PaletteBackground );
	Elements->setFontPropagation( QWidget::NoChildren );
	Elements->setPalettePropagation( QWidget::NoChildren );
	Elements->setFrameStyle( 49 );
	Elements->setTitle( transl("Elements") );
	Elements->setAlignment( 1 );

	cv = new ColorVector( this, "User_1" );
	cv->setGeometry( 10, 10, 210, 370 );
	cv->setMinimumSize( 0, 0 );
	cv->setMaximumSize( 32767, 32767 );
	cv->setFocusPolicy( QWidget::NoFocus );
	cv->setBackgroundMode( QWidget::PaletteBackground );
	cv->setFontPropagation( QWidget::NoChildren );
	cv->setPalettePropagation( QWidget::NoChildren );

	QPushButton* qtarch_PushButton_1;
	qtarch_PushButton_1 = new QPushButton( this, "PushButton_1" );
	qtarch_PushButton_1->setGeometry( 230, 340, 100, 30 );
	qtarch_PushButton_1->setMinimumSize( 0, 0 );
	qtarch_PushButton_1->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_1, SIGNAL(clicked()), SLOT(okslot()) );
	qtarch_PushButton_1->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_1->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_1->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_1->setText( transl("OK") );
	qtarch_PushButton_1->setAutoRepeat( FALSE );
	qtarch_PushButton_1->setAutoResize( FALSE );

	QPushButton* qtarch_PushButton_2;
	qtarch_PushButton_2 = new QPushButton( this, "PushButton_2" );
	qtarch_PushButton_2->setGeometry( 430, 340, 100, 30 );
	qtarch_PushButton_2->setMinimumSize( 0, 0 );
	qtarch_PushButton_2->setMaximumSize( 32767, 32767 );
	connect( qtarch_PushButton_2, SIGNAL(clicked()), SLOT(cancelslot()) );
	qtarch_PushButton_2->setFocusPolicy( QWidget::TabFocus );
	qtarch_PushButton_2->setBackgroundMode( QWidget::PaletteBackground );
	qtarch_PushButton_2->setFontPropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setPalettePropagation( QWidget::NoChildren );
	qtarch_PushButton_2->setText( transl("Cancel") );
	qtarch_PushButton_2->setAutoRepeat( FALSE );
	qtarch_PushButton_2->setAutoResize( FALSE );

	e[0] = new QRadioButton( this, "RadioButton_1" );
	e[0]->setGeometry( 240, 40, 70, 20 );
	e[0]->setMinimumSize( 0, 0 );
	e[0]->setMaximumSize( 32767, 32767 );
	e[0]->setFocusPolicy( QWidget::TabFocus );
	e[0]->setBackgroundMode( QWidget::PaletteBackground );
	e[0]->setFontPropagation( QWidget::NoChildren );
	e[0]->setPalettePropagation( QWidget::NoChildren );
	e[0]->setText( transl("Fire") );
	e[0]->setAutoRepeat( FALSE );
	e[0]->setAutoResize( FALSE );

	e[1] = new QRadioButton( this, "RadioButton_2" );
	e[1]->setGeometry( 310, 40, 70, 20 );
	e[1]->setMinimumSize( 0, 0 );
	e[1]->setMaximumSize( 32767, 32767 );
	e[1]->setFocusPolicy( QWidget::TabFocus );
	e[1]->setBackgroundMode( QWidget::PaletteBackground );
	e[1]->setFontPropagation( QWidget::NoChildren );
	e[1]->setPalettePropagation( QWidget::NoChildren );
	e[1]->setText( transl("Earth") );
	e[1]->setAutoRepeat( FALSE );
	e[1]->setAutoResize( FALSE );

	e[2] = new QRadioButton( this, "RadioButton_3" );
	e[2]->setGeometry( 380, 40, 70, 20 );
	e[2]->setMinimumSize( 0, 0 );
	e[2]->setMaximumSize( 32767, 32767 );
	e[2]->setFocusPolicy( QWidget::TabFocus );
	e[2]->setBackgroundMode( QWidget::PaletteBackground );
	e[2]->setFontPropagation( QWidget::NoChildren );
	e[2]->setPalettePropagation( QWidget::NoChildren );
	e[2]->setText( transl("Air") );
	e[2]->setAutoRepeat( FALSE );
	e[2]->setAutoResize( FALSE );

	e[3] = new QRadioButton( this, "RadioButton_4" );
	e[3]->setGeometry( 450, 40, 70, 20 );
	e[3]->setMinimumSize( 0, 0 );
	e[3]->setMaximumSize( 32767, 32767 );
	e[3]->setFocusPolicy( QWidget::TabFocus );
	e[3]->setBackgroundMode( QWidget::PaletteBackground );
	e[3]->setFontPropagation( QWidget::NoChildren );
	e[3]->setPalettePropagation( QWidget::NoChildren );
	e[3]->setText( transl("Water") );
	e[3]->setAutoRepeat( FALSE );
	e[3]->setAutoResize( FALSE );

	a[0] = new QRadioButton( this, "RadioButton_5" );
	a[0]->setGeometry( 240, 110, 70, 20 );
	a[0]->setMinimumSize( 0, 0 );
	a[0]->setMaximumSize( 32767, 32767 );
	a[0]->setFocusPolicy( QWidget::TabFocus );
	a[0]->setBackgroundMode( QWidget::PaletteBackground );
	a[0]->setFontPropagation( QWidget::NoChildren );
	a[0]->setPalettePropagation( QWidget::NoChildren );
	a[0]->setText( transl("Con.") );
	a[0]->setAutoRepeat( FALSE );
	a[0]->setAutoResize( FALSE );

	a[1] = new QRadioButton( this, "RadioButton_6" );
	a[1]->setGeometry( 310, 110, 70, 20 );
	a[1]->setMinimumSize( 0, 0 );
	a[1]->setMaximumSize( 32767, 32767 );
	a[1]->setFocusPolicy( QWidget::TabFocus );
	a[1]->setBackgroundMode( QWidget::PaletteBackground );
	a[1]->setFontPropagation( QWidget::NoChildren );
	a[1]->setPalettePropagation( QWidget::NoChildren );
	a[1]->setText( transl("Opp.") );
	a[1]->setAutoRepeat( FALSE );
	a[1]->setAutoResize( FALSE );

	a[2] = new QRadioButton( this, "RadioButton_7" );
	a[2]->setGeometry( 380, 110, 70, 20 );
	a[2]->setMinimumSize( 0, 0 );
	a[2]->setMaximumSize( 32767, 32767 );
	a[2]->setFocusPolicy( QWidget::TabFocus );
	a[2]->setBackgroundMode( QWidget::PaletteBackground );
	a[2]->setFontPropagation( QWidget::NoChildren );
	a[2]->setPalettePropagation( QWidget::NoChildren );
	a[2]->setText( transl("Squ.") );
	a[2]->setAutoRepeat( FALSE );
	a[2]->setAutoResize( FALSE );

	a[3] = new QRadioButton( this, "RadioButton_8" );
	a[3]->setGeometry( 450, 110, 70, 20 );
	a[3]->setMinimumSize( 0, 0 );
	a[3]->setMaximumSize( 32767, 32767 );
	a[3]->setFocusPolicy( QWidget::TabFocus );
	a[3]->setBackgroundMode( QWidget::PaletteBackground );
	a[3]->setFontPropagation( QWidget::NoChildren );
	a[3]->setPalettePropagation( QWidget::NoChildren );
	a[3]->setText( transl("Tri.") );
	a[3]->setAutoRepeat( FALSE );
	a[3]->setAutoResize( FALSE );

	a[4] = new QRadioButton( this, "RadioButton_9" );
	a[4]->setGeometry( 240, 150, 70, 20 );
	a[4]->setMinimumSize( 0, 0 );
	a[4]->setMaximumSize( 32767, 32767 );
	a[4]->setFocusPolicy( QWidget::TabFocus );
	a[4]->setBackgroundMode( QWidget::PaletteBackground );
	a[4]->setFontPropagation( QWidget::NoChildren );
	a[4]->setPalettePropagation( QWidget::NoChildren );
	a[4]->setText( transl("Sex.") );
	a[4]->setAutoRepeat( FALSE );
	a[4]->setAutoResize( FALSE );

	a[5] = new QRadioButton( this, "RadioButton_10" );
	a[5]->setGeometry( 310, 150, 70, 20 );
	a[5]->setMinimumSize( 0, 0 );
	a[5]->setMaximumSize( 32767, 32767 );
	a[5]->setFocusPolicy( QWidget::TabFocus );
	a[5]->setBackgroundMode( QWidget::PaletteBackground );
	a[5]->setFontPropagation( QWidget::NoChildren );
	a[5]->setPalettePropagation( QWidget::NoChildren );
	a[5]->setText( transl("Inc.") );
	a[5]->setAutoRepeat( FALSE );
	a[5]->setAutoResize( FALSE );

	a[6] = new QRadioButton( this, "RadioButton_11" );
	a[6]->setGeometry( 380, 150, 70, 20 );
	a[6]->setMinimumSize( 0, 0 );
	a[6]->setMaximumSize( 32767, 32767 );
	a[6]->setFocusPolicy( QWidget::TabFocus );
	a[6]->setBackgroundMode( QWidget::PaletteBackground );
	a[6]->setFontPropagation( QWidget::NoChildren );
	a[6]->setPalettePropagation( QWidget::NoChildren );
	a[6]->setText( transl("S.Sx.") );
	a[6]->setAutoRepeat( FALSE );
	a[6]->setAutoResize( FALSE );

	a[7] = new QRadioButton( this, "RadioButton_12" );
	a[7]->setGeometry( 450, 150, 70, 20 );
	a[7]->setMinimumSize( 0, 0 );
	a[7]->setMaximumSize( 32767, 32767 );
	a[7]->setFocusPolicy( QWidget::TabFocus );
	a[7]->setBackgroundMode( QWidget::PaletteBackground );
	a[7]->setFontPropagation( QWidget::NoChildren );
	a[7]->setPalettePropagation( QWidget::NoChildren );
	a[7]->setText( transl("S.Sq.") );
	a[7]->setAutoRepeat( FALSE );
	a[7]->setAutoResize( FALSE );

	a[8] = new QRadioButton( this, "RadioButton_13" );
	a[8]->setGeometry( 240, 190, 70, 20 );
	a[8]->setMinimumSize( 0, 0 );
	a[8]->setMaximumSize( 32767, 32767 );
	a[8]->setFocusPolicy( QWidget::TabFocus );
	a[8]->setBackgroundMode( QWidget::PaletteBackground );
	a[8]->setFontPropagation( QWidget::NoChildren );
	a[8]->setPalettePropagation( QWidget::NoChildren );
	a[8]->setText( transl("Ses.") );
	a[8]->setAutoRepeat( FALSE );
	a[8]->setAutoResize( FALSE );

	a[9] = new QRadioButton( this, "RadioButton_14" );
	a[9]->setGeometry( 310, 190, 70, 20 );
	a[9]->setMinimumSize( 0, 0 );
	a[9]->setMaximumSize( 32767, 32767 );
	a[9]->setFocusPolicy( QWidget::TabFocus );
	a[9]->setBackgroundMode( QWidget::PaletteBackground );
	a[9]->setFontPropagation( QWidget::NoChildren );
	a[9]->setPalettePropagation( QWidget::NoChildren );
	a[9]->setText( transl("Qui.") );
	a[9]->setAutoRepeat( FALSE );
	a[9]->setAutoResize( FALSE );

	a[10] = new QRadioButton( this, "RadioButton_15" );
	a[10]->setGeometry( 380, 190, 70, 20 );
	a[10]->setMinimumSize( 0, 0 );
	a[10]->setMaximumSize( 32767, 32767 );
	a[10]->setFocusPolicy( QWidget::TabFocus );
	a[10]->setBackgroundMode( QWidget::PaletteBackground );
	a[10]->setFontPropagation( QWidget::NoChildren );
	a[10]->setPalettePropagation( QWidget::NoChildren );
	a[10]->setText( transl("B.Qn.") );
	a[10]->setAutoRepeat( FALSE );
	a[10]->setAutoResize( FALSE );

	a[11] = new QRadioButton( this, "RadioButton_16" );
	a[11]->setGeometry( 450, 190, 70, 20 );
	a[11]->setMinimumSize( 0, 0 );
	a[11]->setMaximumSize( 32767, 32767 );
	a[11]->setFocusPolicy( QWidget::TabFocus );
	a[11]->setBackgroundMode( QWidget::PaletteBackground );
	a[11]->setFontPropagation( QWidget::NoChildren );
	a[11]->setPalettePropagation( QWidget::NoChildren );
	a[11]->setText( transl("S.Qn.") );
	a[11]->setAutoRepeat( FALSE );
	a[11]->setAutoResize( FALSE );

	a[12] = new QRadioButton( this, "RadioButton_17" );
	a[12]->setGeometry( 240, 230, 70, 20 );
	a[12]->setMinimumSize( 0, 0 );
	a[12]->setMaximumSize( 32767, 32767 );
	a[12]->setFocusPolicy( QWidget::TabFocus );
	a[12]->setBackgroundMode( QWidget::PaletteBackground );
	a[12]->setFontPropagation( QWidget::NoChildren );
	a[12]->setPalettePropagation( QWidget::NoChildren );
	a[12]->setText( transl("Sep.") );
	a[12]->setAutoRepeat( FALSE );
	a[12]->setAutoResize( FALSE );

	a[13] = new QRadioButton( this, "RadioButton_18" );
	a[13]->setGeometry( 310, 230, 70, 20 );
	a[13]->setMinimumSize( 0, 0 );
	a[13]->setMaximumSize( 32767, 32767 );
	a[13]->setFocusPolicy( QWidget::TabFocus );
	a[13]->setBackgroundMode( QWidget::PaletteBackground );
	a[13]->setFontPropagation( QWidget::NoChildren );
	a[13]->setPalettePropagation( QWidget::NoChildren );
	a[13]->setText( transl("Nov.") );
	a[13]->setAutoRepeat( FALSE );
	a[13]->setAutoResize( FALSE );

	a[14] = new QRadioButton( this, "RadioButton_19" );
	a[14]->setGeometry( 380, 230, 70, 20 );
	a[14]->setMinimumSize( 0, 0 );
	a[14]->setMaximumSize( 32767, 32767 );
	a[14]->setFocusPolicy( QWidget::TabFocus );
	a[14]->setBackgroundMode( QWidget::PaletteBackground );
	a[14]->setFontPropagation( QWidget::NoChildren );
	a[14]->setPalettePropagation( QWidget::NoChildren );
	a[14]->setText( transl("B.Nv.") );
	a[14]->setAutoRepeat( FALSE );
	a[14]->setAutoResize( FALSE );

	a[15] = new QRadioButton( this, "RadioButton_20" );
	a[15]->setGeometry( 450, 230, 70, 20 );
	a[15]->setMinimumSize( 0, 0 );
	a[15]->setMaximumSize( 32767, 32767 );
	a[15]->setFocusPolicy( QWidget::TabFocus );
	a[15]->setBackgroundMode( QWidget::PaletteBackground );
	a[15]->setFontPropagation( QWidget::NoChildren );
	a[15]->setPalettePropagation( QWidget::NoChildren );
	a[15]->setText( transl("B.Sp.") );
	a[15]->setAutoRepeat( FALSE );
	a[15]->setAutoResize( FALSE );

	a[16] = new QRadioButton( this, "RadioButton_21" );
	a[16]->setGeometry( 240, 270, 70, 20 );
	a[16]->setMinimumSize( 0, 0 );
	a[16]->setMaximumSize( 32767, 32767 );
	a[16]->setFocusPolicy( QWidget::TabFocus );
	a[16]->setBackgroundMode( QWidget::PaletteBackground );
	a[16]->setFontPropagation( QWidget::NoChildren );
	a[16]->setPalettePropagation( QWidget::NoChildren );
	a[16]->setText( transl("T.Sp.") );
	a[16]->setAutoRepeat( FALSE );
	a[16]->setAutoResize( FALSE );

	a[17] = new QRadioButton( this, "RadioButton_22" );
	a[17]->setGeometry( 310, 270, 70, 20 );
	a[17]->setMinimumSize( 0, 0 );
	a[17]->setMaximumSize( 32767, 32767 );
	a[17]->setFocusPolicy( QWidget::TabFocus );
	a[17]->setBackgroundMode( QWidget::PaletteBackground );
	a[17]->setFontPropagation( QWidget::NoChildren );
	a[17]->setPalettePropagation( QWidget::NoChildren );
	a[17]->setText( transl("Q.Nv.") );
	a[17]->setAutoRepeat( FALSE );
	a[17]->setAutoResize( FALSE );

	Aspects->insert( a[0] );
	Aspects->insert( a[1] );
	Aspects->insert( a[2] );
	Aspects->insert( a[3] );
	Aspects->insert( a[4] );
	Aspects->insert( a[5] );
	Aspects->insert( a[6] );
	Aspects->insert( a[7] );
	Aspects->insert( a[8] );
	Aspects->insert( a[9] );
	Aspects->insert( a[10] );
	Aspects->insert( a[11] );
	Aspects->insert( a[12] );
	Aspects->insert( a[13] );
	Aspects->insert( a[14] );
	Aspects->insert( a[15] );
	Aspects->insert( a[16] );
	Aspects->insert( a[17] );

	Elements->insert( e[0] );
	Elements->insert( e[1] );
	Elements->insert( e[2] );
	Elements->insert( e[3] );

	resize( 540,390 );
	setMinimumSize( 0, 0 );
	setMaximumSize( 32767, 32767 );
}


SetColorsData::~SetColorsData()
{
}
void SetColorsData::aspectsslot(int)
{
}
void SetColorsData::elementsslot(int)
{
}
void SetColorsData::okslot()
{
}
void SetColorsData::cancelslot()
{
}