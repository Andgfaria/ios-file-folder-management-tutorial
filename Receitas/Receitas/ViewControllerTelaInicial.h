//
//  ViewControllerTelaInicial.h
//  Receitas
//
//  Created by André Gimenez Faria on 09/04/14.
//  Copyright (c) 2014 Vinicius Miana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewControllerTabelaReceitas.h"

@interface ViewControllerTelaInicial : UIViewController {
    ViewControllerTabelaReceitas *tabelaReceitas;
}

-(ViewControllerTelaInicial *)init;

@end
