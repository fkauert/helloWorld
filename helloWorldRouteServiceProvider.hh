<?hh //strict

    namespace helloWorld;


    use Plenty\Plugin\RouteServiceProvider;
    use Plenty\Plugin\Routing\Router;

    class helloWorldRouteServiceProvider extends RouteServiceProvider
    {
        public function map(Router $router):void
        {
            router->get('hello','helloWorld\ContentController@sayHello');
        }
    }
