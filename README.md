# K8055 Adapter pour Visual Studio Community (2017)

Code exemple pour ouvrir la communication avec la carte Velleman K8055
```C++
#include "K8055Adapter.h"   // 1 - Inclure la classe d'adaptation K8055Adapter

int main(int argc, char ** argv)
{
	K8055Adapter * carteES = K8055Adapter::getInstance();   // 2 - Récupérer l'instance de la classe d'adaptation.

	carteES->OpenDevice(0);                                 // 3 - Ouvrir le lien avec la carte de votre choix (toutes
                                                          //     les fonctions visibles dans la documentation de la 
                                                          //     carte peuvent être appelées sur cet objet.
	
	// 4 - Réaliser vos opérations sur la carte (lectures / écritures)

	carteES->CloseDevice();                                 // 5 - Fermer le lien avec la carte d'entrées / sorties.
	K8055Adapter::freeInstance();                           // 6 - Libérer l'instance de la classe d'adaptation.

	return 0;
}
```

## Remarques :

- La librairie fournie par le constructeur de la carte est compilée pour les architectures 32 bits (x86), vérifiez bien que vous utilisez une configuration type architecture 32 bits lors de la compilation de votre projet.
- N'oubliez pas de placer la dll (K8055D.dll) "à côté" de l'exécutable dans le répertoire de compilation de celui-ci.
